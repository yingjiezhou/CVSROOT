const Char_t *Pass = "Pass126 021G"; 
Int_t date = 20050120; // 020
data_t Data[] = {
	{2,0,0,1,2, 1, 1, 1, 0, 0.01452, 0.00000, 0.00000, 0.00000,"duuP2101"},
	{2,0,0,1,2, 1, 1, 2, 1,-0.00938,-0.02714, 0.00000, 0.00000,"duuP2101"},
	{2,0,0,1,2, 1, 2, 1, 0, 0.00751, 0.00000, 0.00000, 0.00000,"duuP2201"},
	{2,0,0,1,2, 1, 3, 1, 1, 0.00271, 0.00504, 0.00000, 0.00000,"duuP2301"},
	{2,0,0,1,2, 1, 3, 2, 1,-0.02606,-0.03759, 0.00000, 0.00000,"duuP2301"},
	{2,0,0,1,2, 1, 4, 1, 1,-0.01113, 0.00327, 0.00000, 0.00000,"duuP2401"},
	{2,0,0,1,2, 1, 4, 2, 1, 0.02709, 0.00405, 0.00000, 0.00000,"duuP2401"},
	{2,0,0,1,1, 2, 1, 1, 1, 0.01422, 0.00570, 0.00000, 0.00000,"duuP1102"},
	{2,0,0,1,1, 2, 1, 2, 1, 0.03962, 0.00686, 0.00000, 0.00000,"duuP1102"},
	{2,0,0,1,1, 2, 2, 1, 0, 0.02286, 0.00000, 0.00000, 0.00000,"duuP1202"},
	{2,0,0,1,1, 2, 2, 2, 1, 0.03632, 0.00850, 0.00000, 0.00000,"duuP1202"},
	{2,0,0,1,2, 3, 1, 1, 1, 0.03061, 0.01716, 0.00000, 0.00000,"duuP2103"},
	{2,0,0,1,2, 3, 1, 2, 1,-0.01550,-0.02242, 0.00000, 0.00000,"duuP2103"},
	{2,0,0,1,2, 3, 2, 1, 1, 0.01828, 0.01394, 0.00000, 0.00000,"duuP2203"},
	{2,0,0,1,2, 3, 2, 2, 3, 0.02050, 0.00000, 0.00000, 0.01212,"duuP2203"},
	{2,0,0,1,2, 3, 3, 1, 3, 0.02880, 0.00000, 0.00000,-0.00789,"duuP2303"},
	{2,0,0,1,2, 3, 3, 2, 1,-0.01801,-0.01506, 0.00000, 0.00000,"duuP2303"},
	{2,0,0,1,2, 3, 4, 1, 1, 0.02461, 0.02592, 0.00000, 0.00000,"duuP2403"},
	{2,0,0,1,2, 3, 4, 2, 1,-0.01530,-0.02911, 0.00000, 0.00000,"duuP2403"},
	{2,0,0,1,1, 4, 1, 1, 0, 0.01313, 0.00000, 0.00000, 0.00000,"duuP1104"},
	{2,0,0,1,1, 4, 1, 2, 1,-0.01210,-0.02007, 0.00000, 0.00000,"duuP1104"},
	{2,0,0,1,1, 4, 2, 1, 1, 0.06221, 0.02371, 0.00000, 0.00000,"duuP1204"},
	{2,0,0,1,1, 4, 2, 2, 1,-0.03069,-0.02629, 0.00000, 0.00000,"duuP1204"},
	{2,0,0,1,1, 4, 3, 1, 1, 0.00717,-0.00798, 0.00000, 0.00000,"duuP1304"},
	{2,0,0,1,1, 4, 3, 2, 1,-0.00651,-0.01453, 0.00000, 0.00000,"duuP1304"},
	{2,0,0,1,1, 4, 4, 1, 1, 0.00232,-0.00841, 0.00000, 0.00000,"duuP1404"},
	{2,0,0,1,1, 4, 4, 2, 1, 0.01673, 0.01120, 0.00000, 0.00000,"duuP1404"},
	{2,0,0,1,2, 5, 1, 1, 1, 0.00001,-0.00826, 0.00000, 0.00000,"duuP2105"},
	{2,0,0,1,2, 5, 1, 2, 2, 0.01391, 0.00796, 0.00348, 0.00000,"duuP2105"},
	{2,0,0,1,2, 5, 2, 1, 1, 0.00347,-0.00866, 0.00000, 0.00000,"duuP2205"},
	{2,0,0,1,2, 5, 2, 2, 2, 0.01642, 0.00362, 0.00301, 0.00000,"duuP2205"},
	{2,0,0,1,2, 5, 3, 1, 1, 0.00096,-0.00798, 0.00000, 0.00000,"duuP2305"},
	{2,0,0,1,2, 5, 3, 2, 0, 0.01849, 0.00000, 0.00000, 0.00000,"duuP2305"},
	{2,0,0,1,2, 5, 4, 1, 1,-0.00327,-0.00670, 0.00000, 0.00000,"duuP2405"},
	{2,0,0,1,2, 5, 4, 2, 1, 0.01640, 0.00489, 0.00000, 0.00000,"duuP2405"},
	{2,0,0,1,1, 6, 1, 1, 1,-0.01728,-0.00525, 0.00000, 0.00000,"duuP1106"},
	{2,0,0,1,1, 6, 1, 2, 1,-0.00446, 0.00681, 0.00000, 0.00000,"duuP1106"},
	{2,0,0,1,1, 6, 2, 1, 1,-0.01618,-0.00386, 0.00000, 0.00000,"duuP1206"},
	{2,0,0,1,1, 6, 2, 2, 1,-0.00266, 0.00628, 0.00000, 0.00000,"duuP1206"},
	{2,0,0,1,1, 6, 3, 1, 1,-0.01831,-0.00566, 0.00000, 0.00000,"duuP1306"},
	{2,0,0,1,1, 6, 3, 2, 1,-0.00183, 0.00415, 0.00000, 0.00000,"duuP1306"},
	{2,0,0,1,1, 6, 4, 1, 1,-0.02293,-0.00801, 0.00000, 0.00000,"duuP1406"},
	{2,0,0,1,1, 6, 4, 2, 1,-0.00109, 0.00534, 0.00000, 0.00000,"duuP1406"},
	{2,0,0,1,2, 7, 1, 1, 1,-0.02426,-0.00875, 0.00000, 0.00000,"duuP2107"},
	{2,0,0,1,2, 7, 1, 2, 0,-0.00132, 0.00000, 0.00000, 0.00000,"duuP2107"},
	{2,0,0,1,2, 7, 2, 1, 1,-0.02227,-0.00885, 0.00000, 0.00000,"duuP2207"},
	{2,0,0,1,2, 7, 2, 2, 1, 0.00168, 0.00305, 0.00000, 0.00000,"duuP2207"},
	{2,0,0,1,2, 7, 3, 1, 1,-0.02127,-0.00987, 0.00000, 0.00000,"duuP2307"},
	{2,0,0,1,2, 7, 3, 2, 1,-0.00159, 0.00814, 0.00000, 0.00000,"duuP2307"},
	{2,0,0,1,2, 7, 4, 1, 1,-0.01431,-0.01157, 0.00000, 0.00000,"duuP2407"},
	{2,0,0,3,6, 1, 1, 1, 1, 0.02993,-0.00627, 0.00000, 0.00000,"duuP6101"},
	{2,0,0,3,6, 1, 1, 2, 1, 0.02358, 0.00815, 0.00000, 0.00000,"duuP6101"},
	{2,0,0,3,6, 1, 2, 1, 1, 0.00890, 0.00827, 0.00000, 0.00000,"duuP6201"},
	{2,0,0,3,6, 1, 2, 2, 0, 0.00363, 0.00000, 0.00000, 0.00000,"duuP6201"},
	{2,0,0,3,6, 1, 3, 1, 1, 0.02516, 0.02575, 0.00000, 0.00000,"duuP6301"},
	{2,0,0,3,6, 1, 4, 1, 1, 0.04754, 0.02626, 0.00000, 0.00000,"duuP6401"},
	{2,0,0,3,6, 1, 4, 2, 1,-0.03416,-0.04620, 0.00000, 0.00000,"duuP6401"},
	{2,0,0,3,6, 1, 5, 1, 0, 0.02582, 0.00000, 0.00000, 0.00000,"duuP6501"},
	{2,0,0,3,6, 1, 6, 1, 1, 0.02428, 0.00611, 0.00000, 0.00000,"duuP6601"},
	{2,0,0,3,6, 1, 6, 2, 0, 0.02079, 0.00000, 0.00000, 0.00000,"duuP6601"},
	{2,0,0,3,6, 1, 7, 1, 1, 0.03705, 0.02230, 0.00000, 0.00000,"duuP6701"},
	{2,0,0,3,6, 1, 7, 2, 1, 0.01803,-0.00338, 0.00000, 0.00000,"duuP6701"},
	{2,0,0,3,5, 2, 1, 1, 1, 0.03343,-0.00447, 0.00000, 0.00000,"duuP5102"},
	{2,0,0,3,5, 2, 1, 2, 1, 0.04520, 0.01154, 0.00000, 0.00000,"duuP5102"},
	{2,0,0,3,5, 2, 2, 1, 1, 0.03479,-0.00640, 0.00000, 0.00000,"duuP5202"},
	{2,0,0,3,5, 2, 2, 2, 0, 0.04179, 0.00000, 0.00000, 0.00000,"duuP5202"},
	{2,0,0,3,5, 2, 3, 1, 1, 0.03048,-0.00530, 0.00000, 0.00000,"duuP5302"},
	{2,0,0,3,5, 2, 3, 2, 0, 0.04449, 0.00000, 0.00000, 0.00000,"duuP5302"},
	{2,0,0,3,5, 2, 4, 1, 1, 0.03025,-0.00501, 0.00000, 0.00000,"duuP5402"},
	{2,0,0,3,5, 2, 4, 2, 1, 0.04740, 0.00483, 0.00000, 0.00000,"duuP5402"},
	{2,0,0,3,5, 2, 5, 1, 1, 0.07019, 0.03668, 0.00000, 0.00000,"duuP5502"},
	{2,0,0,3,6, 3, 1, 1, 1,-0.08452,-0.00796, 0.00000, 0.00000,"duuP6103"},
	{2,0,0,3,6, 3, 1, 2, 0,-0.06809, 0.00000, 0.00000, 0.00000,"duuP6103"},
	{2,0,0,3,6, 3, 3, 1, 1,-0.04609, 0.00673, 0.00000, 0.00000,"duuP6303"},
	{2,0,0,3,6, 3, 3, 2, 1, 0.00043,-0.01137, 0.00000, 0.00000,"duuP6303"},
	{2,0,0,3,6, 3, 4, 1, 0,-0.01363, 0.00000, 0.00000, 0.00000,"duuP6403"},
	{2,0,0,3,6, 3, 4, 2, 0,-0.03566, 0.00000, 0.00000, 0.00000,"duuP6403"},
	{2,0,0,3,6, 3, 5, 1, 1, 0.02109, 0.01127, 0.00000, 0.00000,"duuP6503"},
	{2,0,0,3,6, 3, 5, 2, 1,-0.00037,-0.01289, 0.00000, 0.00000,"duuP6503"},
	{2,0,0,3,6, 3, 6, 1, 1, 0.05113, 0.01018, 0.00000, 0.00000,"duuP6603"},
	{2,0,0,3,6, 3, 6, 2, 1, 0.04013,-0.01002, 0.00000, 0.00000,"duuP6603"},
	{2,0,0,3,6, 3, 7, 1, 0, 0.10904, 0.00000, 0.00000, 0.00000,"duuP6703"},
	{2,0,0,3,6, 3, 7, 2, 3, 0.01322, 0.00000, 0.00000, 0.02203,"duuP6703"},
	{2,0,0,3,5, 4, 1, 1, 1, 0.01554, 0.00634, 0.00000, 0.00000,"duuP5104"},
	{2,0,0,3,5, 4, 1, 2, 0, 0.02671, 0.00000, 0.00000, 0.00000,"duuP5104"},
	{2,0,0,3,5, 4, 2, 1, 0, 0.00852, 0.00000, 0.00000, 0.00000,"duuP5204"},
	{2,0,0,3,5, 4, 2, 2, 1, 0.02929, 0.00531, 0.00000, 0.00000,"duuP5204"},
	{2,0,0,3,5, 4, 3, 1, 1, 0.01412, 0.00465, 0.00000, 0.00000,"duuP5304"},
	{2,0,0,3,5, 4, 3, 2, 1, 0.02648,-0.00520, 0.00000, 0.00000,"duuP5304"},
	{2,0,0,3,5, 4, 4, 1, 0, 0.01780, 0.00000, 0.00000, 0.00000,"duuP5404"},
	{2,0,0,3,5, 4, 4, 2, 0, 0.02038, 0.00000, 0.00000, 0.00000,"duuP5404"},
	{2,0,0,3,6, 5, 6, 1, 0, 0.00218, 0.00000, 0.00000, 0.00000,"duuP6605"},
	{2,0,0,3,6, 5, 6, 2, 0, 0.00203, 0.00000, 0.00000, 0.00000,"duuP6605"},
	{2,0,0,3,6, 5, 7, 1, 2,-0.00973, 0.00000,-0.01600, 0.00000,"duuP6705"},
	{2,0,0,3,6, 5, 7, 2, 0, 0.00824, 0.00000, 0.00000, 0.00000,"duuP6705"},
	{2,0,0,3,5, 6, 1, 1, 2, 0.02048, 0.00000,-0.01652, 0.00000,"duuP5106"},
	{2,0,0,3,5, 6, 1, 2, 1, 0.04972,-0.00318, 0.00000, 0.00000,"duuP5106"},
	{2,0,0,3,5, 6, 2, 1, 0, 0.03352, 0.00000, 0.00000, 0.00000,"duuP5206"},
	{2,0,0,3,5, 6, 3, 1, 0, 0.03557, 0.00000, 0.00000, 0.00000,"duuP5306"},
	{2,0,0,3,5, 6, 3, 2, 0, 0.03770, 0.00000, 0.00000, 0.00000,"duuP5306"},
	{2,0,0,3,5, 6, 4, 1, 0, 0.03006, 0.00000, 0.00000, 0.00000,"duuP5406"},
	{2,0,0,3,5, 6, 4, 2, 0, 0.04227, 0.00000, 0.00000, 0.00000,"duuP5406"},
	{2,0,0,3,5, 6, 5, 1, 1, 0.02086,-0.01151, 0.00000, 0.00000,"duuP5506"},
	{2,0,0,3,5, 6, 5, 2, 1, 0.04299, 0.00604, 0.00000, 0.00000,"duuP5506"},
	{2,0,0,3,5, 6, 6, 1, 0, 0.02280, 0.00000, 0.00000, 0.00000,"duuP5606"},
	{2,0,0,3,5, 6, 6, 2, 3, 0.04660, 0.00000, 0.00000,-0.00344,"duuP5606"},
	{2,0,0,3,5, 6, 7, 1, 0, 0.02503, 0.00000, 0.00000, 0.00000,"duuP5706"},
	{2,0,0,3,5, 6, 7, 2, 1, 0.04182, 0.00591, 0.00000, 0.00000,"duuP5706"},
	{2,0,0,3,6, 7, 3, 2, 0,-0.16118, 0.00000, 0.00000, 0.00000,"duuP6307"},
	{2,0,0,3,5,10, 1, 1, 1, 0.00309,-0.01984, 0.00000, 0.00000,"duuP5110"},
	{2,0,0,3,5,10, 2, 1, 1, 0.00333,-0.00635, 0.00000, 0.00000,"duuP5210"},
	{2,0,0,3,5,10, 2, 2, 3, 0.01571, 0.00000, 0.00000,-0.00497,"duuP5210"},
	{2,0,0,3,5,10, 3, 1, 0, 0.03008, 0.00000, 0.00000, 0.00000,"duuP5310"},
	{2,0,0,3,5,10, 3, 2, 1, 0.02957, 0.00475, 0.00000, 0.00000,"duuP5310"},
	{2,0,0,3,5,10, 4, 1, 0, 0.03196, 0.00000, 0.00000, 0.00000,"duuP5410"},
	{2,0,0,3,5,10, 4, 2, 1, 0.04304, 0.00413, 0.00000, 0.00000,"duuP5410"},
	{2,0,0,3,5,10, 5, 1, 1, 0.04844,-0.00591, 0.00000, 0.00000,"duuP5510"},
	{2,0,0,3,5,10, 5, 2, 0, 0.06197, 0.00000, 0.00000, 0.00000,"duuP5510"},
	{2,0,0,3,5,10, 6, 1, 1, 0.06054,-0.00615, 0.00000, 0.00000,"duuP5610"},
	{2,0,0,3,5,10, 6, 2, 0, 0.07675, 0.00000, 0.00000, 0.00000,"duuP5610"},
	{2,0,0,3,5,10, 7, 1, 0, 0.07582, 0.00000, 0.00000, 0.00000,"duuP5710"},
	{2,0,0,3,5,10, 7, 2, 1, 0.08757, 0.00808, 0.00000, 0.00000,"duuP5710"},
	{2,0,0,3,6,11, 1, 2, 0,-0.01854, 0.00000, 0.00000, 0.00000,"duuP6111"},
	{2,0,0,3,6,11, 2, 1, 1,-0.02780,-0.01078, 0.00000, 0.00000,"duuP6211"},
	{2,0,0,3,6,11, 2, 2, 2,-0.02836, 0.01295, 0.00473, 0.00000,"duuP6211"},
	{2,0,0,3,6,11, 3, 1, 2,-0.03508,-0.00608,-0.00299, 0.00000,"duuP6311"},
	{2,0,0,3,6,11, 3, 2, 2,-0.02216, 0.00541, 0.00409, 0.00000,"duuP6311"},
	{2,0,0,3,5,12, 1, 1, 1,-0.00740,-0.01663, 0.00000, 0.00000,"duuP5112"},
	{2,0,0,3,5,12, 1, 2, 1, 0.01471, 0.00615, 0.00000, 0.00000,"duuP5112"},
	{2,0,0,3,5,12, 2, 2, 1, 0.01616, 0.01046, 0.00000, 0.00000,"duuP5212"},
	{2,0,0,3,5,12, 3, 1, 1, 0.01576,-0.00810, 0.00000, 0.00000,"duuP5312"},
	{2,0,0,3,5,12, 3, 2, 1, 0.02401, 0.01049, 0.00000, 0.00000,"duuP5312"},
	{2,0,0,3,5,12, 4, 1, 0, 0.01070, 0.00000, 0.00000, 0.00000,"duuP5412"},
	{2,0,0,3,5,12, 4, 2, 1, 0.03263, 0.00671, 0.00000, 0.00000,"duuP5412"},
	{2,0,0,3,5,12, 5, 1, 0, 0.02305, 0.00000, 0.00000, 0.00000,"duuP5512"},
	{2,0,0,3,5,12, 5, 2, 1, 0.03158, 0.00561, 0.00000, 0.00000,"duuP5512"},
	{2,0,0,3,5,12, 6, 1, 0, 0.03694, 0.00000, 0.00000, 0.00000,"duuP5612"},
	{2,0,0,3,5,12, 7, 1, 1, 0.04071,-0.00481, 0.00000, 0.00000,"duuP5712"},
	{2,0,0,3,5,12, 7, 2, 1, 0.04808, 0.00801, 0.00000, 0.00000,"duuP5712"},
	{2,0,0,3,6,13, 1, 1, 1, 0.00452,-0.00787, 0.00000, 0.00000,"duuP6113"},
	{2,0,0,3,6,13, 1, 2, 1, 0.02159, 0.01095, 0.00000, 0.00000,"duuP6113"},
	{2,0,0,3,6,13, 2, 1, 1, 0.00354,-0.00640, 0.00000, 0.00000,"duuP6213"},
	{2,0,0,3,6,13, 2, 2, 0, 0.03059, 0.00000, 0.00000, 0.00000,"duuP6213"},
	{2,0,0,3,6,13, 3, 1, 1, 0.00334,-0.00723, 0.00000, 0.00000,"duuP6313"},
	{2,0,0,3,6,13, 3, 2, 1, 0.02228, 0.00537, 0.00000, 0.00000,"duuP6313"},
	{2,0,0,3,6,13, 4, 1, 1, 0.00223,-0.00689, 0.00000, 0.00000,"duuP6413"},
	{2,0,0,3,6,13, 4, 2, 1, 0.01786, 0.01011, 0.00000, 0.00000,"duuP6413"},
	{2,0,0,3,6,13, 5, 1, 0, 0.00284, 0.00000, 0.00000, 0.00000,"duuP6513"},
	{2,0,0,3,6,13, 6, 1, 2, 0.00393,-0.01010,-0.00597, 0.00000,"duuP6613"},
	{2,0,0,3,6,13, 7, 1, 2, 0.01023, 0.00000,-0.00807, 0.00000,"duuP6713"},
	{2,0,0,3,6,13, 7, 2, 1, 0.01809, 0.00579, 0.00000, 0.00000,"duuP6713"},
	{2,0,0,3,5,14, 1, 1, 1, 0.03093,-0.01366, 0.00000, 0.00000,"duuP5114"},
	{2,0,0,3,5,14, 1, 2, 1, 0.04804,-0.01470, 0.00000, 0.00000,"duuP5114"},
	{2,0,0,3,5,14, 2, 1, 0, 0.00300, 0.00000, 0.00000, 0.00000,"duuP5214"},
	{2,0,0,3,5,14, 2, 2, 3, 0.05492, 0.00000, 0.00000,-0.00450,"duuP5214"},
	{2,0,0,3,5,14, 3, 1, 0,-0.01426, 0.00000, 0.00000, 0.00000,"duuP5314"},
	{2,0,0,3,5,14, 3, 2, 2,-0.00740, 0.00000, 0.06350, 0.00000,"duuP5314"},
	{2,0,0,3,5,14, 4, 1, 0,-0.03755, 0.00000, 0.00000, 0.00000,"duuP5414"},
	{2,0,0,3,5,14, 4, 2, 0, 0.01022, 0.00000, 0.00000, 0.00000,"duuP5414"},
	{2,0,0,3,5,14, 5, 2, 1,-0.04662, 0.04256, 0.00000, 0.00000,"duuP5514"},
	{2,0,0,3,5,14, 6, 1, 0,-0.01701, 0.00000, 0.00000, 0.00000,"duuP5614"},
	{2,0,0,3,5,14, 6, 2, 1,-0.01631, 0.01191, 0.00000, 0.00000,"duuP5614"},
	{2,0,0,3,5,14, 7, 1, 1,-0.03704,-0.01048, 0.00000, 0.00000,"duuP5714"},
	{2,0,0,3,5,14, 7, 2, 0,-0.02843, 0.00000, 0.00000, 0.00000,"duuP5714"},
	{2,0,0,2,4, 1, 1, 1, 2, 0.01045, 0.00000,-0.01440, 0.00000,"duuP4101"},
	{2,0,0,2,4, 1, 1, 2, 2, 0.00685, 0.00000, 0.02304, 0.00000,"duuP4101"},
	{2,0,0,2,4, 1, 2, 1, 2, 0.01377, 0.00000,-0.01166, 0.00000,"duuP4201"},
	{2,0,0,2,4, 1, 2, 2, 2, 0.01173, 0.00000, 0.01455, 0.00000,"duuP4201"},
	{2,0,0,2,4, 1, 3, 1, 2, 0.01179, 0.00000,-0.01348, 0.00000,"duuP4301"},
	{2,0,0,2,4, 1, 3, 2, 2, 0.00861, 0.00000, 0.01274, 0.00000,"duuP4301"},
	{2,0,0,2,3, 2, 1, 1, 1,-0.01648,-0.00762, 0.00000, 0.00000,"duuP3102"},
	{2,0,0,2,3, 2, 2, 1, 2,-0.02291, 0.00000,-0.00418, 0.00000,"duuP3202"},
	{2,0,0,2,3, 2, 2, 2, 1,-0.00271, 0.00674, 0.00000, 0.00000,"duuP3202"},
	{2,0,0,2,3, 2, 3, 1, 1,-0.02187,-0.00528, 0.00000, 0.00000,"duuP3302"},
	{2,0,0,2,3, 2, 3, 2, 1, 0.00057, 0.00504, 0.00000, 0.00000,"duuP3302"},
	{2,0,0,2,3, 2, 4, 1, 0,-0.00468, 0.00000, 0.00000, 0.00000,"duuP3402"},
	{2,0,0,2,3, 2, 4, 2, 0,-0.01975, 0.00000, 0.00000, 0.00000,"duuP3402"},
	{2,0,0,2,3, 2, 5, 2, 1,-0.05673,-0.04635, 0.00000, 0.00000,"duuP3502"},
	{2,0,0,2,4, 3, 3, 1, 0,-0.00709, 0.00000, 0.00000, 0.00000,"duuP4303"},
	{2,0,0,2,4, 3, 3, 2, 0, 0.01574, 0.00000, 0.00000, 0.00000,"duuP4303"},
	{2,0,0,2,4, 3, 4, 1, 0,-0.01053, 0.00000, 0.00000, 0.00000,"duuP4403"},
	{2,0,0,2,4, 3, 4, 2, 1, 0.01104, 0.00896, 0.00000, 0.00000,"duuP4403"},
	{2,0,0,2,4, 3, 5, 1, 1,-0.00312,-0.00681, 0.00000, 0.00000,"duuP4503"},
	{2,0,0,2,4, 3, 5, 2, 1, 0.00788, 0.01237, 0.00000, 0.00000,"duuP4503"},
	{2,0,0,2,4, 3, 6, 1, 0, 0.00995, 0.00000, 0.00000, 0.00000,"duuP4603"},
	{2,0,0,2,4, 3, 6, 2, 0,-0.00461, 0.00000, 0.00000, 0.00000,"duuP4603"},
	{2,0,0,2,3, 4, 1, 1, 1,-0.02978,-0.01088, 0.00000, 0.00000,"duuP3104"},
	{2,0,0,2,3, 4, 1, 2, 0,-0.04971, 0.00000, 0.00000, 0.00000,"duuP3104"},
	{2,0,0,2,3, 4, 2, 1, 1,-0.02410,-0.01648, 0.00000, 0.00000,"duuP3204"},
	{2,0,0,2,3, 4, 3, 1, 1,-0.02782, 0.01067, 0.00000, 0.00000,"duuP3304"},
	{2,0,0,2,3, 4, 3, 2, 0,-0.04596, 0.00000, 0.00000, 0.00000,"duuP3304"},
	{2,0,0,2,3, 4, 4, 1, 0,-0.04933, 0.00000, 0.00000, 0.00000,"duuP3404"},
	{2,0,0,2,3, 4, 4, 2, 0,-0.04133, 0.00000, 0.00000, 0.00000,"duuP3404"},
	{2,0,0,2,3, 4, 5, 1, 0,-0.05360, 0.00000, 0.00000, 0.00000,"duuP3504"},
	{2,0,0,2,3, 4, 5, 2, 0,-0.02859, 0.00000, 0.00000, 0.00000,"duuP3504"},
	{2,0,0,2,3, 4, 6, 1, 0,-0.05696, 0.00000, 0.00000, 0.00000,"duuP3604"},
	{2,0,0,2,3, 4, 6, 2, 1,-0.01873,-0.00764, 0.00000, 0.00000,"duuP3604"},
	{2,0,0,2,4, 5, 1, 1, 1, 0.01937,-0.01767, 0.00000, 0.00000,"duuP4105"},
	{2,0,0,2,4, 5, 2, 1, 1,-0.01569,-0.00782, 0.00000, 0.00000,"duuP4205"},
	{2,0,0,2,4, 5, 2, 2, 1, 0.00197, 0.02099, 0.00000, 0.00000,"duuP4205"},
	{2,0,0,2,4, 5, 3, 1, 0,-0.02230, 0.00000, 0.00000, 0.00000,"duuP4305"},
	{2,0,0,2,4, 5, 3, 2, 1, 0.00030, 0.01210, 0.00000, 0.00000,"duuP4305"},
	{2,0,0,2,4, 5, 4, 1, 1,-0.03499,-0.00538, 0.00000, 0.00000,"duuP4405"},
	{2,0,0,2,4, 5, 4, 2, 1,-0.00503, 0.00819, 0.00000, 0.00000,"duuP4405"},
	{2,0,0,2,4, 5, 5, 2, 0,-0.01072, 0.00000, 0.00000, 0.00000,"duuP4505"},
	{2,0,0,2,4, 5, 6, 1, 0,-0.05003, 0.00000, 0.00000, 0.00000,"duuP4605"},
	{2,0,0,2,4, 5, 6, 2, 1,-0.01688, 0.01400, 0.00000, 0.00000,"duuP4605"},
	{2,0,0,2,3, 6, 1, 1, 2,-0.03548, 0.00000,-0.02910, 0.00000,"duuP3106"},
	{2,0,0,2,3, 6, 1, 2, 2,-0.04994, 0.00000, 0.02623, 0.00000,"duuP3106"},
	{2,0,0,2,3, 6, 2, 1, 3,-0.00058, 0.00000,-0.02569, 0.00605,"duuP3206"},
	{2,0,0,2,3, 6, 2, 2, 2,-0.04925, 0.00000, 0.02607, 0.00000,"duuP3206"},
	{2,0,0,2,3, 6, 3, 1, 2, 0.00882, 0.00000,-0.02712, 0.00000,"duuP3306"},
	{2,0,0,2,3, 6, 3, 2, 2,-0.03185, 0.00000, 0.02783, 0.00000,"duuP3306"},
	{2,0,0,2,3, 6, 4, 1, 1,-0.02052, 0.00642, 0.00000, 0.00000,"duuP3406"},
	{2,0,0,2,3, 6, 4, 2, 1, 0.03826,-0.03314, 0.00000, 0.00000,"duuP3406"},
	{2,0,0,2,3, 6, 5, 2, 0, 0.01146, 0.00000, 0.00000, 0.00000,"duuP3506"},
	{2,0,0,2,3, 6, 6, 1, 1,-0.00502,-0.00598, 0.00000, 0.00000,"duuP3606"},
	{2,0,0,2,4, 7, 1, 1, 1,-0.00617,-0.00693, 0.00000, 0.00000,"duuP4107"},
	{2,0,0,2,4, 7, 1, 2, 1, 0.01592, 0.00855, 0.00000, 0.00000,"duuP4107"},
	{2,0,0,2,4, 7, 2, 1, 1,-0.00412,-0.00839, 0.00000, 0.00000,"duuP4207"},
	{2,0,0,2,4, 7, 2, 2, 1, 0.01690, 0.00501, 0.00000, 0.00000,"duuP4207"},
	{2,0,0,2,4, 7, 3, 1, 1,-0.00665,-0.00561, 0.00000, 0.00000,"duuP4307"},
	{2,0,0,2,4, 7, 3, 2, 1, 0.01906, 0.00552, 0.00000, 0.00000,"duuP4307"},
	{2,0,0,2,4, 7, 4, 2, 1, 0.01773, 0.00430, 0.00000, 0.00000,"duuP4407"},
	{2,0,0,2,4, 7, 5, 1, 1,-0.00613,-0.00732, 0.00000, 0.00000,"duuP4507"},
	{2,0,0,2,4, 7, 5, 2, 1, 0.01788, 0.00730, 0.00000, 0.00000,"duuP4507"},
	{2,0,0,2,4, 7, 6, 1, 1,-0.00217,-0.00878, 0.00000, 0.00000,"duuP4607"},
	{2,0,0,2,4, 7, 6, 2, 1, 0.01459, 0.00758, 0.00000, 0.00000,"duuP4607"},
	{2,0,0,2,3,10, 1, 2, 2, 0.01902, 0.00000, 0.01473, 0.00000,"duuP3110"},
	{2,0,0,2,3,10, 2, 1, 0, 0.02335, 0.00000, 0.00000, 0.00000,"duuP3210"},
	{2,0,0,2,3,10, 2, 2, 2, 0.01241, 0.00000, 0.01269, 0.00000,"duuP3210"},
	{2,0,0,2,3,10, 3, 1, 2, 0.02423, 0.00000,-0.01387, 0.00000,"duuP3310"},
	{2,0,0,2,3,10, 4, 1, 0, 0.01104, 0.00000, 0.00000, 0.00000,"duuP3410"},
	{2,0,0,2,3,10, 4, 2, 1, 0.02240, 0.00541, 0.00000, 0.00000,"duuP3410"},
	{2,0,0,2,3,10, 5, 1, 0,-0.00771, 0.00000, 0.00000, 0.00000,"duuP3510"},
	{2,0,0,2,3,10, 5, 2, 1, 0.02485, 0.00760, 0.00000, 0.00000,"duuP3510"},
	{2,0,0,2,3,10, 6, 2, 0, 0.01467, 0.00000, 0.00000, 0.00000,"duuP3610"},
	{2,0,0,2,4,11, 2, 1, 2, 0.09424, 0.00000,-0.08515, 0.00000,"duuP4211"},
	{2,0,0,2,4,11, 2, 2, 2,-0.05680, 0.00000, 0.08028, 0.00000,"duuP4211"},
	{2,0,0,2,4,11, 3, 1, 2, 0.11569, 0.00000,-0.08203, 0.00000,"duuP4311"},
	{2,0,0,2,4,11, 3, 2, 2,-0.03410, 0.00000, 0.07797, 0.00000,"duuP4311"},
	{2,0,0,2,4,11, 4, 1, 3, 0.07057, 0.01956, 0.00000,-0.03049,"duuP4411"},
	{2,0,0,2,4,11, 4, 2, 3, 0.14217,-0.08341, 0.00000, 0.03647,"duuP4411"},
	{2,0,0,2,4,11, 5, 1, 3, 0.09366, 0.01935, 0.00000,-0.03695,"duuP4511"},
	{2,0,0,2,4,11, 5, 2, 3, 0.08690,-0.01418, 0.00000, 0.03857,"duuP4511"},
	{2,0,0,2,4,11, 6, 1, 1, 0.10664, 0.06062, 0.00000, 0.00000,"duuP4611"},
	{2,0,0,2,4,11, 6, 2, 3, 0.11170,-0.00580, 0.00000, 0.03784,"duuP4611"},
	{2,0,0,2,3,12, 1, 1, 0, 0.01990, 0.00000, 0.00000, 0.00000,"duuP3112"},
	{2,0,0,2,3,12, 1, 2, 1, 0.02669, 0.00459, 0.00000, 0.00000,"duuP3112"},
	{2,0,0,2,3,12, 2, 1, 0, 0.01559, 0.00000, 0.00000, 0.00000,"duuP3212"},
	{2,0,0,2,3,12, 2, 2, 0, 0.02701, 0.00000, 0.00000, 0.00000,"duuP3212"},
	{2,0,0,2,3,12, 3, 1, 1, 0.01853,-0.00879, 0.00000, 0.00000,"duuP3312"},
	{2,0,0,2,3,12, 3, 2, 1, 0.02699, 0.00836, 0.00000, 0.00000,"duuP3312"}
};
