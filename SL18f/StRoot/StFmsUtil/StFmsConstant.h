#ifndef STROOT_STFMSUTIL_STFMSCONSTANT_H_
#define STROOT_STFMSUTIL_STFMSCONSTANT_H_

#include "StFmsUtil/StFmsDbConfig.h"
#define GetPar(name,dtype) \
((StFmsDbConfig::Instance()).getParameter<dtype>(name))

#define ROW_LOW_LIMIT GetPar("ROW_LOW_LIMIT",int)
#define COL_LOW_LIMIT GetPar("COL_LOW_LIMIT",int)
#define CEN_ROW_LRG GetPar("CEN_ROW_LRG",float)
#define CEN_ROW_WIDTH_LRG GetPar("CEN_ROW_WIDTH_LRG",int)
#define CEN_UPPER_COL_LRG GetPar("CEN_UPPER_COL_LRG",int)
#define CEN_ROW_SML GetPar("CEN_ROW_SML",float)
#define CEN_ROW_WIDTH_SML GetPar("CEN_ROW_WIDTH_SML",int)
#define CEN_UPPER_COL_SML GetPar("CEN_UPPER_COL_SML",int)
#define CORNER_ROW GetPar("CORNER_ROW",float)
#define CORNER_LOW_COL GetPar("CORNER_LOW_COL",float)
#define CLUSTER_BASE GetPar("CLUSTER_BASE",int)
#define CLUSTER_ID_FACTOR_DET GetPar("CLUSTER_ID_FACTOR_DET",int)
#define TOTAL_TOWERS GetPar("TOTAL_TOWERS",unsigned int)
#define PEAK_TOWER_FACTOR GetPar("PEAK_TOWER_FACTOR",float)
#define TOWER_E_THRESHOLD GetPar("TOWER_E_THRESHOLD",float)
#define BAD_2PH_CHI2 GetPar("BAD_2PH_CHI2",float)
#define BAD_MIN_E_LRG GetPar("BAD_MIN_E_LRG",float)
#define BAD_MAX_TOW_LRG GetPar("BAD_MAX_TOW_LRG",float)
#define BAD_MIN_E_SML GetPar("BAD_MIN_E_SML",float)
#define BAD_MAX_TOW_SML GetPar("BAD_MAX_TOW_SML",float)
#define VALID_FT GetPar("VALID_FT",float)
#define VALID_2ND_FT GetPar("VALID_2ND_FT",float)
#define VALID_E_OWN GetPar("VALID_E_OWN",float)
#define SS_C GetPar("SS_C",float)
#define SS_A1 GetPar("SS_A1",float)
#define SS_A2 GetPar("SS_A2",float)
#define SS_A3 GetPar("SS_A3",float)
#define SS_B1 GetPar("SS_B1",float)
#define SS_B2 GetPar("SS_B2",float)
#define SS_B3 GetPar("SS_B3",float)
#define CAT_NTOWERS_PH1 GetPar("CAT_NTOWERS_PH1",int)
#define CAT_EP1_PH2 GetPar("CAT_EP1_PH2",float)
#define CAT_EP0_PH2 GetPar("CAT_EP0_PH2",float)
#define CAT_SIGMAMAX_MIN_PH2 GetPar("CAT_SIGMAMAX_MIN_PH2",float)
#define CAT_EP1_PH1 GetPar("CAT_EP1_PH1",float)
#define CAT_EP0_PH1 GetPar("CAT_EP0_PH1",float)
#define CAT_SIGMAMAX_MAX_PH1 GetPar("CAT_SIGMAMAX_MAX_PH1",float)
#define PH1_START_NPH GetPar("PH1_START_NPH",float)
#define PH1_DELTA_N GetPar("PH1_DELTA_N",float)
#define PH1_DELTA_X GetPar("PH1_DELTA_X",float)
#define PH1_DELTA_Y GetPar("PH1_DELTA_Y",float)
#define PH1_DELTA_E GetPar("PH1_DELTA_E",float)
#define PH2_START_NPH GetPar("PH2_START_NPH",double)
#define PH2_START_FSIGMAMAX GetPar("PH2_START_FSIGMAMAX",float)
#define PH2_RAN_LOW GetPar("PH2_RAN_LOW",float)
#define PH2_RAN_HIGH GetPar("PH2_RAN_HIGH",float)
#define PH2_STEP_0 GetPar("PH2_STEP_0",float)
#define PH2_STEP_1 GetPar("PH2_STEP_1",float)
#define PH2_STEP_2 GetPar("PH2_STEP_2",float)
#define PH2_STEP_3 GetPar("PH2_STEP_3",float)
#define PH2_STEP_4 GetPar("PH2_STEP_4",float)
#define PH2_STEP_5 GetPar("PH2_STEP_5",float)
#define PH2_STEP_6 GetPar("PH2_STEP_6",float)
#define PH2_MAXTHETA_F GetPar("PH2_MAXTHETA_F",float)
#define PH2_LOWER_NPH GetPar("PH2_LOWER_NPH",float)
#define PH2_LOWER_XF GetPar("PH2_LOWER_XF",float)
#define PH2_LOWER_YF GetPar("PH2_LOWER_YF",float)
#define PH2_LOWER_XMAX_F GetPar("PH2_LOWER_XMAX_F",float)
#define PH2_LOWER_XMAX_POW GetPar("PH2_LOWER_XMAX_POW",float)
#define PH2_LOWER_XMAX_LIMIT GetPar("PH2_LOWER_XMAX_LIMIT",double)
#define PH2_LOWER_5_F GetPar("PH2_LOWER_5_F",float)
#define PH2_LOWER_6_F GetPar("PH2_LOWER_6_F",float)
#define PH2_UPPER_NPH GetPar("PH2_UPPER_NPH",float)
#define PH2_UPPER_XF GetPar("PH2_UPPER_XF",float)
#define PH2_UPPER_YF GetPar("PH2_UPPER_YF",float)
#define PH2_UPPER_XMIN_F GetPar("PH2_UPPER_XMIN_F",float)
#define PH2_UPPER_XMIN_P0 GetPar("PH2_UPPER_XMIN_P0",float)
#define PH2_UPPER_XMIN_LIMIT GetPar("PH2_UPPER_XMIN_LIMIT",double)
#define PH2_UPPER_5_F GetPar("PH2_UPPER_5_F",float)
#define PH2_UPPER_6_F GetPar("PH2_UPPER_6_F",float)
#define PH2_3_LIMIT_LOWER GetPar("PH2_3_LIMIT_LOWER",float)
#define PH2_3_LIMIT_UPPER GetPar("PH2_3_LIMIT_UPPER",float)
#define GL_LOWER_1 GetPar("GL_LOWER_1",float)
#define GL_UPPER_DELTA_MAXN GetPar("GL_UPPER_DELTA_MAXN",float)
#define GL_0_DLOWER GetPar("GL_0_DLOWER",float)
#define GL_0_DUPPER GetPar("GL_0_DUPPER",float)
#define GL_1_DLOWER GetPar("GL_1_DLOWER",float)
#define GL_1_DUPPER GetPar("GL_1_DUPPER",float)
#define GL_2_DLOWER GetPar("GL_2_DLOWER",float)
#define GL_2_DUPPER GetPar("GL_2_DUPPER",float)

#endif
