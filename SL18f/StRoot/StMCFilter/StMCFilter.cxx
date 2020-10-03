// @(#)root/eg:$Id: StMCFilter.cxx,v 1.10 2018/02/21 02:04:41 perev Exp $
// Author: Victor Perev  17/03/2009
//////////////////////////////////////////////////////////////////////////
//                                                                      //
// StMCFilter Class                                                 //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

/*!

\class StMCFilter 

\author Victor Perev April 2009

StMCFilter base class is :
A user interface. User must overload functions:

 - RejectEG (StGenParticles &) , called inside Pythia. 
   Interaction point  in (0,0,0); EG == EventGenerator

 - RejectGT (StGenParticles &) , called inside Geant before tracking.
   Interaction point generated by Geant; GT==GeantTracking

 - RejectGE (StGenParticles &) , called inside Geant after tracking;
   GE==GeantEnd
All three methods have exactly the same input arguments;
User must provide the unique name of the his filter. Selection of filter is 
based on this name. Apart of that, in this base class, all the machinery of
connection to Pythia and Geant  is hidden 
At the end Finish() is called. Print statistics.  Could be overloaded

*/

//______________________________________________________________________________
#include "stdlib.h"
#include "ctype.h"
#include "math.h"
#include <cassert>
#include <cstring>
#include <iostream>

#include "StMCFilter.h"
#include <map>
#include "StHepParticle.h"
#include "StG3Particle.h"

StMCFilter      *StMCFilter::fgSelected   =0;
StHepParticleMaster *StMCFilter::fgHepParticle =0;
StG3ParticleMaster  *StMCFilter::fgG3Particle  =0;
myMap_t *StMCFilter::mgMap=0;

extern void *gStarFiltAction; // 
extern void *gStarFiltConfig; // 

//______________________________________________________________________________
StMCFilter::StMCFilter(const char *name)
{
  if(!mgMap) mgMap = new myMap_t;
  memset(fBeg,0,fEnd-fBeg+1);
  fName= name;
  std::string myName(fName);
  for (int i=0;i<(int)myName.size();i++) { myName[i]=tolower(myName[i]);}


  myMap_t::iterator it = mgMap->find(myName);
  assert (it == mgMap->end() && "Filter name must be unique");
  (*mgMap)[myName] = this;
  gStarFiltAction=(void*)&StMCFilter::Action;
  gStarFiltConfig=(void*)&StMCFilter::Config;
  std::cout << "*** StMCFilter::StMCFilter(" << myName.c_str() << ") CREATED ***" << std::endl;
}
//______________________________________________________________________________
StMCFilter::~StMCFilter()
{
  mgMap->clear(); 
  delete fgHepParticle; fgHepParticle=0;
  delete fgG3Particle ; fgG3Particle =0;
  
}  
//______________________________________________________________________________
int StMCFilter::Select(const char *name)
{
//VP  assert(!fgSelected && "Only one filter is allowed");
  std::string myName(name);
  for (int i=0;i<(int)myName.size();i++) { myName[i]=tolower(myName[i]);}
  myMap_t::iterator it = mgMap->find(std::string(myName));
  assert (it != mgMap->end() && "Filter MUST be found");
  if (it == mgMap->end()) return 1;
  fgSelected = (*it).second;
  std::cout << "*** StMCFilter::Select(" << myName.c_str() << ") SELCTED ***" << std::endl;
  return 0;
}
//______________________________________________________________________________
void StMCFilter::SetEG(void *hepEvt)
{
  if (fgHepParticle) return;
  fgHepParticle = new StHepParticleMaster(hepEvt);
}
//______________________________________________________________________________
void StMCFilter::SetG3(void *gfKine,void *gfVert)
{
  if (fgG3Particle) return;
  fgG3Particle = new StG3ParticleMaster((GFKINE_t)gfKine,(GFVERT_t)gfVert);
}
//______________________________________________________________________________
int StMCFilter::REJECTEG()
{
  if (!fgSelected || !fgHepParticle) return 0;
  fgSelected->fCnt[0][0]++;
  fgHepParticle->Update();
  int ans =fgSelected->RejectEG(*fgHepParticle);
  if (ans) fgSelected->fCnt[0][1]++;
  return ans;
}
//______________________________________________________________________________
int StMCFilter::REJECTGT()
{
  if (!fgSelected || !fgG3Particle) return 0;
  fgSelected->fCnt[1][0]++;
  fgG3Particle->Update();
  int ans = fgSelected->RejectGT(*fgG3Particle);
  if (ans) fgSelected->fCnt[1][1]++;
  return ans;
}
//______________________________________________________________________________
int StMCFilter::REJECTGE()
{
  
  if (!fgSelected || !fgG3Particle) return 0;
  fgG3Particle->Update();
  fgSelected->fCnt[2][0]++;
  int ans = fgSelected->RejectGE(*fgG3Particle);
  if (ans) fgSelected->fCnt[2][1]++;
  return ans;
}
//______________________________________________________________________________
////////////////////////////////////////////////////////////////////////////////
// Perform calls of filter from fortran world, called only in starsim //
////////////////////////////////////////////////////////////////////////////////
int  StMCFilter::Action(int kase, void *par1,void *par2)
{
  enum { kSelect=0,kEGInit=1, kEGReje=2
                  ,kGTInit=3, kGTReje=4
		  ,kGEInit=5, kGEReje=6,kFinish=7};

  switch (kase) {
  
    case kSelect: return StMCFilter::Select((char*)par1);

    case kEGInit: StMCFilter::SetEG(par1     ); 	return 0;
    case kGTInit: StMCFilter::SetG3(par1,par2); 	return 0;
    case kGEInit: 					return 0;

    case kEGReje: return StMCFilter::REJECTEG();
    case kGTReje: return StMCFilter::REJECTGT();
    case kGEReje: return StMCFilter::REJECTGE();
    case kFinish: StMCFilter::FINISH(); return 0;
    default: assert(0 && "StMCFilter::Action Wrong case");
  }
  return 0;
}    
//______________________________________________________________________________
int  StMCFilter::Config( std::string key, const float value )
{
  if ( !fgSelected ) return 0; // should issue warning here
  fgSelected->parseConfig( key, value );
  return 1;
}


//______________________________________________________________________________
void StMCFilter::FINISH()
{
static const char *filtName[] = {"RejectEG","RejectGT","RejectGE"};
  if (!fgSelected) return;
  std::cout << "*** Filter Finish(" << fgSelected->GetName().c_str() << ") ***" << std::endl;
  for (int i=0; i<3; i++) 
  {
    if (!fgSelected->fCnt[i][0]) continue;
    std::cout << "*** Filter " << filtName[i] << " nTot=" << fgSelected->fCnt[i][0] 
              << "\tnRej=" << fgSelected->fCnt[i][1] << std::endl;
  }
  fgSelected->Finish();
}


  
