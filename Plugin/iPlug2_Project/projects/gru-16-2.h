/**
 * Autogenerated header file for gru-16-2
 * neural network model parameters.
 * 
 * Created on: 03/10/2022 at: 10:19
 * By Michael Holmes
*/

#pragma once
#include "layers.h"

template<typename T>
class Gru_16_2
{
public:
	const static int h = 16;
	const static int d = 1;
	const static int layers = 2;

	FccLayer<T, h, d> f;
	GruLayer<T, h, d> l0;
	GruLayer<T, h, h> l1;

	Gru_16_2() {
		l0.Wir << -0.9439706 , 0.7224515 ,-1.3896171 , 0.3964356 , 0.0410811 ,-0.48924088, -0.68596697, 2.171525  , 0.14718431,-1.8031199 ,-0.0529203 , 0.37238488, -0.2834706 , 0.89238596,-0.49455932, 0.49450234;
		l0.Wiz << -1.9218254 , 3.1473987 , 5.527617  ,-0.75189775,-0.13398717, 1.7496414 ,  1.1712339 , 2.4975646 , 0.19318469,-0.47757164,-2.2457688 ,-2.0986054 ,  0.3506293 , 0.6031943 , 0.18779737,-0.28291205;
		l0.Win <<  1.5624487 , 0.85018533, 1.2173139 , 0.08488095,-0.5242452 , 0.37934515,  0.11419888, 1.8659626 ,-0.29233676, 1.2567198 , 0.34954378, 0.25584567,  0.22921048, 1.3315179 ,-0.02155741, 0.88393724;

		l0.Whr <<  0.09736051, 0.19290492,-0.41425103, 0.20777327,-0.14790535,-0.09977514, -0.32429877, 0.19908945, 0.27590606, 0.528125  , 0.11634647, 0.030528  ,  0.19015273, 0.6313915 , 0.00149666,-0.29224008,-0.17872192, 0.1104175 , -0.48784643, 0.04041729, 0.27489918,-0.16859445, 0.11960602,-0.18888971,  0.03848211,-0.17436609, 0.11351069,-0.09655325, 0.05644352,-0.4307979 ,  0.04546761, 0.38958168, 0.24595307, 0.15345965, 0.21666883,-0.13544504, -0.2503667 ,-0.1538805 , 0.01976243,-0.11229927, 0.1175899 , 0.6001954 , -0.32187137, 0.07222643, 0.21038719,-0.13681121,-0.20771404,-0.48869216,  0.3580956 , 0.02058544, 0.30755788,-0.17971362,-0.18221645,-0.20728368, -0.29602847, 0.11593637, 0.1286434 ,-0.2580666 ,-0.22223927, 0.26886398, -0.54376274,-0.09599691, 0.21612264,-0.24022023, 0.04729401, 0.11505979, -0.10898247, 0.14907898, 0.15145148,-0.0781952 ,-0.14129782,-0.2300473 , -0.04195769,-0.05454692, 0.121102  ,-0.06028199, 0.01933608,-0.23162721,  0.08414556,-0.40545374, 0.03931533, 0.07740936,-0.38066062, 0.17623186,  0.16119812, 0.00405815, 0.1325883 , 0.13370445,-0.2165529 ,-0.1649456 ,  0.20203784,-0.0591019 ,-0.45732874,-0.34940168, 0.26944962,-0.42888612, -0.5454055 , 0.0176826 ,-0.88346386,-0.02812089, 0.4655094 ,-0.36493796, -0.13243626, 0.17483339, 0.23688623,-0.3940516 ,-0.09486571, 0.16725913,  0.4771191 ,-0.58994603, 0.14237739, 0.04595114, 0.16129261, 0.03493068,  0.46170685,-0.10238451, 0.25130367, 0.2095405 , 0.313064  ,-0.05492128, -0.5453915 ,-0.3942781 ,-0.03089621, 0.19393969, 0.05957369, 0.19360588, -0.00935628, 0.02589671, 0.23398411,-0.17472109,-0.02362576, 0.20380789, -0.37505233, 0.14096306,-0.06017132, 0.28982073,-0.09719105,-0.2912031 ,  0.14026804,-0.16464566,-0.3779085 ,-0.20865737, 0.20568141,-0.19179533,  0.11383447,-0.14484678,-0.01654076, 0.29010534,-0.13547964,-0.02674037, -0.19476007,-0.52408594, 0.2528547 , 0.518101  , 0.18604635,-0.21507898,  0.11327943, 0.3323208 ,-0.01062695,-0.45354703,-0.16915536,-0.10168831, -0.20535992, 0.19604643,-0.07075583, 0.01758451, 0.01774814, 0.36995444,  0.0693318 , 0.08177552, 0.01158016, 0.16241224,-0.06090142, 0.16847888,  0.00427586,-0.13577503,-0.15851901, 0.03287186,-0.03762595, 0.2219396 ,  0.23761924,-0.18802613, 0.08604658,-0.12663089, 0.03059903,-0.47007248,  0.08690564, 0.04824892,-0.12889867, 0.19891061,-0.2434813 , 0.09832315,  0.42104566, 0.21773072, 0.3537106 , 0.1242791 ,-0.2287176 , 0.09884031, -0.33421475,-0.2619803 ,-0.15148404, 0.4311612 , 0.16914712, 0.14160109, -0.18343437, 0.22692767, 0.12729391,-0.100892  ,-0.16882572, 0.04924326, -0.25659055, 0.16760182, 0.20015657,-0.06040582, 0.3052937 , 0.15485574, -0.10213796, 0.17365476, 0.2107954 , 0.08098907, 0.06346898,-0.0520389 ,  0.0042224 , 0.15203995,-0.56172454, 0.14966674,-0.13760963, 0.3306797 , -0.10056674,-0.2925045 ,-0.3443479 , 0.12092875,-0.03091115,-0.40988982, -0.1617636 , 0.09739437,-0.29612687,-0.11645675, 0.2556301 ,-0.30271   ,  0.0202405 , 0.76516014, 0.28841493, 0.37002486,-0.30581158, 0.18982692, -0.20443523,-0.4021352 ,-0.06103846, 0.2720652 , 0.16542998, 0.11314403, -0.38258007, 0.5247972 , 0.05486213, 0.10475507;
		l0.Whz <<  1.3425226 ,-3.1405802 , 0.7901492 , 0.37858844, 0.78313726,-0.827736  ,  1.5756087 ,-1.1767801 ,-0.925772  , 0.8399297 ,-0.29006255,-0.24416308,  2.531884  ,-1.2637355 , 0.465166  ,-0.8918875 ,-0.5071549 , 0.18198195,  0.83628994,-0.04290102, 0.04549773,-0.18386227,-0.2954809 ,-1.2465007 ,  0.43319422,-0.32017148, 1.2983888 , 1.0541768 ,-0.81111485,-0.47924912,  0.8962508 ,-0.31811544, 0.65837324, 0.8402349 , 2.6327076 ,-0.9495543 , -3.2756004 , 6.853892  , 7.0023823 ,-1.0914004 ,-6.6428437 , 5.537461  , -3.5015025 ,-0.8690074 , 0.19829175, 1.4213737 ,-5.1743374 , 0.7846962 ,  0.19362819, 0.5645625 , 0.2863464 , 0.8781158 , 0.3012705 ,-0.81724536, -0.6036114 , 0.3904134 , 0.46818772,-1.3159163 , 0.8440152 , 0.6207826 ,  0.15839137, 0.49550414, 0.6993442 ,-0.20057069,-0.42766032,-0.69964486,  0.29071742,-0.2777437 ,-0.55179507, 0.22417916, 0.84400976,-1.6699226 , -0.46133304,-1.3852634 , 0.12402289,-0.4583301 , 0.9913821 ,-0.11702345,  0.07421082, 0.03164067,-1.1669915 , 0.4640817 ,-1.0739844 ,-0.02974382,  1.2485164 ,-0.60760564,-0.82137525, 0.09268422, 0.75150895,-0.2451797 , -0.07107371,-0.15101203, 0.57527125,-0.84168977, 0.94756174, 0.5128247 , -0.46865135, 0.14573042,-0.37216848, 0.37163544, 0.599376  ,-0.5608554 , -0.34178743,-0.1554904 , 0.58507377,-1.4107856 , 0.525692  , 0.15152408, -0.84098774,-0.03386753, 0.73233926,-0.4791703 , 0.09901223, 0.14027303,  0.60955447,-0.18847573,-1.3546748 , 0.63176256, 0.56117415,-0.58504915,  0.04465831, 1.8755375 , 0.11042905, 0.0980453 , 1.2200173 ,-0.6282229 , -0.80841136, 1.2165135 ,-0.08749633, 0.10373916, 0.35058215, 0.86639875,  0.4078017 ,-1.0913068 ,-0.20565216,-0.25221357,-0.2835673 ,-0.1599263 , -0.0206138 , 0.2259625 , 0.22793463,-0.0120938 , 1.0634418 , 0.20147426, -0.31380793,-0.24733973, 0.5455422 , 0.35007367,-0.9444269 ,-0.02759759, -0.16072518,-0.25465876, 0.34863004, 0.86147237,-0.28452703,-0.04786529,  0.9836773 , 0.4570567 ,-0.20069565,-0.9261412 , 0.39061046, 0.66059935,  0.66871077, 0.6206282 ,-1.3335382 ,-0.96776134, 0.334295  , 0.8325919 , -2.0856652 ,-0.75588274, 0.75195533, 0.3721618 ,-1.6809558 , 0.15694848,  0.3631732 ,-1.2662383 , 0.35760638,-1.4898894 ,-1.0601437 ,-0.9826099 , -1.1960033 , 0.87187856, 2.4194367 , 1.150318  ,-1.6410679 ,-3.1244605 , -1.1326934 ,-1.8074353 ,-1.6314764 ,-1.2778925 ,-1.3770009 ,-0.3995451 ,  0.40981758,-0.9535264 , 1.3177958 ,-0.10994836,-0.7870228 , 0.19697747,  1.4220576 , 0.02863603,-1.316782  , 0.31984207,-0.6884982 ,-0.29152748,  0.13395089,-0.5507399 ,-0.32233262,-0.76993316,-0.5594247 , 0.21135904,  0.5155272 , 0.46654335,-1.1773297 ,-0.5558732 ,-0.0677065 ,-0.6890347 ,  0.4900972 ,-0.702008  , 0.5237672 , 0.4210639 , 0.36571312, 1.222529  ,  0.33964303, 0.24469988,-0.8373932 ,-1.9048027 ,-0.49035004, 0.4383614 ,  0.8872789 , 0.15754919, 0.46936533,-1.4364544 , 0.32023787, 1.5305508 , -0.82592905,-0.49706045, 3.1326246 ,-1.7504473 , 0.44228244, 2.2705603 , -0.87755764,-0.82824206, 1.3704114 ,-1.3589783 ,-1.3812215 , 1.9849327 ,  1.5127121 ,-0.1544549 ,-2.3559568 ,-0.21907134,-1.0802522 ,-1.0830836 ,  0.42033565,-0.30468366,-1.5497599 , 1.2278022 ;
		l0.Whn <<  0.04048529,-0.05541116, 0.1486097 , 0.14867549, 0.3517795 , 0.20628802,  0.3678032 , 0.25620803,-0.6479339 ,-0.44701737,-0.024364  , 0.1159336 , -0.15891585,-0.50981313,-0.31981882, 0.04878842,-0.08326629,-0.14819795, -0.19914536, 0.18374687, 0.3245159 , 0.08834521,-0.28859913,-0.10578189, -0.08537068, 0.09087646,-0.0659674 , 0.07888436,-0.10052338,-0.21338978, -0.02203912, 0.20364124,-0.17649905,-0.12145396, 0.05018762,-0.21632032,  0.37996548, 0.18349966, 0.1239953 ,-0.06836143,-0.0513305 ,-0.11752835, -0.1282667 ,-0.29554617, 0.09542204,-0.27158347, 0.05705009, 0.36935216,  0.3740179 , 0.15407719, 0.24370654, 0.15818289, 0.14355151,-0.21175376,  0.12994637, 0.12939884,-0.15128879,-0.11417979,-0.02849856,-0.16828382, -0.07099012, 0.08968055,-0.15135433,-0.19470705,-0.16039509,-0.06661342, -0.36810127,-0.07772886, 0.00302471,-0.28443506, 0.08521518,-0.20805888, -0.08100697,-0.00480683, 0.16896717,-0.0599783 ,-0.11638052,-0.17520627, -0.08160703,-0.23522368, 0.07397885,-0.03130767,-0.00756596,-0.24519478,  0.03654388, 0.2173562 , 0.23134607,-0.14056163, 0.11996907, 0.04212873,  0.23750457, 0.12836467, 0.04823054, 0.06604767,-0.17380807, 0.43925825,  0.20900762, 0.27652627, 0.35954258,-0.08172319,-0.436918  ,-0.03143996,  0.22275084, 0.15513901,-0.25929973, 0.30400708,-0.07858336,-0.21321818,  0.07707656,-0.00269731,-0.13421781,-0.03021515, 0.22047545, 0.28126013,  0.7949588 ,-0.21547408,-0.1348681 , 0.05183418,-0.06341787, 0.39952344, -0.7135242 ,-0.37990093, 0.20665616, 0.21441959,-0.25111702, 0.10950439, -0.10206398, 0.5124601 , 0.03098119,-0.0606936 , 0.07471892,-0.02272578, -0.20916197,-0.11215414, 0.06217546,-0.19593093, 0.14427562,-0.1292784 ,  0.11029798, 0.09657558, 0.06711668,-0.15756622, 0.01140019, 0.10958506, -0.72513914,-0.3371457 ,-0.43652454,-0.37905475, 0.5565908 ,-0.10153891, -0.03203412,-0.438107  ,-0.3486644 , 0.06297433,-0.39794475,-0.30014867,  0.36342078,-0.92996943,-0.25685686, 0.32678443,-0.01977123,-0.02806809, -0.15879174,-0.01423385, 0.52484083, 0.19554082,-0.20492849, 0.13789213,  0.02950512,-0.24808286,-0.13654225,-0.14313193, 0.16543314,-0.22444056, -0.2274998 , 0.22723818, 0.15011507,-0.08197918,-0.07799301, 0.16893226,  0.2404096 , 0.22818394, 0.00629517, 0.17069553, 0.24693455,-0.0880981 ,  0.08953855, 0.10051795,-0.09504452,-0.17059872, 0.22205053, 0.25397918, -0.46477732,-0.23652932,-0.28044912, 0.23559535, 0.38271508, 0.08257728,  0.01041661,-0.11186148,-0.18104345,-0.4978343 ,-0.14757586, 0.0705855 ,  0.1822176 ,-0.48787904,-0.08573969, 0.21301986,-0.41406664, 0.15199779, -0.1896617 ,-0.04149792, 0.15396135,-0.02350465,-0.14267726,-0.10254808, -0.00635174,-0.03245951, 0.18199256,-0.12593926, 0.12611476,-0.16970727,  0.16546379, 0.0172985 ,-0.07045278, 0.20789154,-0.03292764, 0.17690194,  0.26488647,-0.32221887,-0.09241987,-0.29089636,-0.09632353,-0.41960037,  0.26518795, 0.01842039,-0.43582663,-0.01301188, 0.35377073,-0.49070656, -0.5801496 ,-0.17926419,-0.27274778,-0.12704004, 0.19898777,-0.258313  , -0.08060081,-0.13879621,-0.03555521,-0.11031157, 0.07626179, 0.0368898 ,  0.5545787 , 0.1904389 ,-0.03539085,-0.48311192;

		l0.bir << -0.06139358,-0.08399966,-0.21619706,-0.15831919, 0.11161686,-0.16132429, -0.13498774, 0.3342087 , 0.11344199,-0.32537338,-0.0339017 , 0.21311478, -0.15941887,-0.15142341, 0.03761764, 0.33574778;
		l0.biz << -2.2510693 ,-0.71629936,-2.3328178 , 0.2630149 ,-0.9297143 ,-0.131868  ,  0.27280563,-1.8798606 , 0.39198503,-0.98894674,-1.2546587 ,-0.5297304 , -0.53675586,-1.763799  ,-2.0490663 , 0.21234791;
		l0.bin <<  0.20846553, 0.07460421, 0.1031389 , 0.26988757, 0.17837897,-0.20128089, -0.2647613 ,-0.15918669, 0.19142447, 0.23270716, 0.35776463, 0.13644698,  0.11558219,-0.02826233, 0.2960724 , 0.01379365;

		l0.bhr << -0.34881335, 0.17573643,-0.08738699, 0.00396858,-0.13090417, 0.21451007, -0.2758258 , 0.08426402, 0.07057684,-0.12962335, 0.08576368, 0.2761358 ,  0.18268421,-0.0840556 , 0.06255107, 0.5156507 ;
		l0.bhz << -2.2499464 ,-0.6695939 ,-2.5168455 ,-0.03686955,-0.5721556 ,-0.35598132,  0.20933335,-1.7572902 , 0.40876034,-0.82097226,-1.2161124 ,-0.36414823, -0.5002111 ,-1.7019132 ,-2.3440459 , 0.5759782 ;
		l0.bhn << -0.03071878, 0.22837351,-0.00979532, 0.27466568,-0.06589767, 0.04863128,  0.16313735, 0.42990062, 0.20738688,-0.12502412, 0.12459188, 0.23160039, -0.12662749, 0.13682169, 0.01743958,-0.12073138;

		l0.htn1 << 0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.;

		l1.Wir <<  7.95397162e-01, 2.87991911e-01, 1.72480702e+00, 6.97070640e-03, -8.18395078e-01,-1.23443566e-02, 1.89986691e-01, 1.00629485e+00, -3.18203598e-01, 4.79729436e-02,-9.39788818e-02, 1.31860316e-01, -8.70576560e-01, 7.43170977e-01, 1.67439118e-01, 1.95328131e-01, -3.82381350e-01, 2.60636032e-01,-1.38757467e-01, 8.68579894e-02,  1.04985856e-01, 1.61426127e-01,-8.14391226e-02, 1.17480978e-01, -2.96437498e-02, 2.93584853e-01, 7.60578290e-02, 2.44022787e-01,  1.98993251e-01,-1.33884788e-01, 1.99038506e-01, 8.11288431e-02,  1.49084544e-02,-4.37131077e-02, 3.42840999e-02,-7.18386238e-03,  3.82271796e-01,-2.37944230e-01,-9.22246873e-02, 5.52312024e-02,  4.70021695e-01,-3.65588278e-01, 3.98154646e-01, 2.21768796e-01,  1.34896711e-02, 9.77424458e-02, 1.21067658e-01,-2.50286400e-01, -6.59654856e-01,-1.95193157e-01,-4.87529606e-01, 3.57200712e-01,  4.74992901e-01,-1.54718593e-01,-4.56565134e-02,-2.74337083e-01,  8.01244453e-02,-8.87375593e-01, 1.30897537e-01,-1.43881381e-01, -3.74692112e-01,-3.70125324e-01, 1.86829969e-01,-1.99284941e-01, -6.36365533e-01,-2.58229941e-01,-5.08641124e-01,-8.48374814e-02,  2.41165429e-01,-1.00980997e-01,-2.37514511e-01,-8.44457686e-01, -1.14473589e-01, 2.00101182e-01,-1.71146750e-01, 1.16418302e-01, -3.39028635e-03,-5.87561429e-01, 2.78450191e-01,-2.33570769e-01, -1.32410240e+00,-7.42684826e-02,-7.00075030e-01,-1.79961056e-01,  9.38222051e-01,-2.54122168e-01,-1.24744050e-01,-1.10759950e+00,  4.89097565e-01, 2.75581449e-01,-5.16300917e-01,-4.46059465e-01,  4.98171061e-01,-5.42937100e-01, 1.16139092e-01, 3.31867486e-01,  3.09956640e-01,-6.87787458e-02, 3.60389590e-01, 3.73890735e-02, -2.41297141e-01, 9.74348411e-02, 8.73897150e-02, 5.34650385e-01,  2.79999077e-01, 3.31436634e-01,-1.31201982e-01, 2.86130041e-01,  6.92795217e-02, 4.72425222e-01,-6.68075457e-02,-1.51445135e-01, -5.36833823e-01, 1.91070512e-01,-4.72610563e-01, 8.95222798e-02,  5.31920969e-01,-9.48555544e-02, 9.76121128e-02,-4.26561326e-01, -2.65621260e-04, 3.11774343e-01,-9.47510004e-02, 2.34035254e-02,  4.29632455e-01, 2.87507266e-01,-7.17939734e-02, 1.16089314e-01,  1.05283320e+00, 2.16946495e-03, 5.16326427e-01, 2.66731322e-01, -3.26965421e-01,-1.79811060e-01, 6.08861521e-02, 4.69763786e-01, -1.48255497e-01, 4.20266300e-01, 5.11992015e-02,-1.22564547e-01,  4.13295701e-02, 1.85633942e-01,-1.56528696e-01,-2.76854932e-01,  9.50409546e-02,-1.02926128e-01,-7.78860629e-01, 8.65004808e-02, -1.50251999e-01,-2.19517022e-01, 1.56665266e-01,-4.66520160e-01,  3.91198874e-01, 1.58767208e-01, 6.99600205e-02,-9.83032733e-02,  3.21165413e-01, 1.54880151e-01, 1.32665604e-01, 2.57250607e-01,  5.86537719e-01, 1.15646154e-01, 1.44784465e-01, 1.53296888e-01, -2.43848175e-01,-2.37057760e-01, 5.44783175e-02, 4.93016243e-01,  5.02281189e-02, 2.64184833e-01, 2.81087667e-01,-1.51053399e-01, -7.80651271e-01, 3.87709327e-02,-8.94945674e-03,-3.61245513e-01, -6.07847631e-01, 1.58466101e-01,-2.69021809e-01,-5.75620458e-02,  3.19024026e-01,-3.28128815e-01,-8.83062719e-04,-9.57623795e-02,  1.41902134e-01,-1.91151202e-01, 3.26866686e-01, 1.00186795e-01, -4.32300307e-02, 1.44557819e-01,-3.57024483e-02,-4.64332193e-01,  4.92229789e-01, 1.17418557e-01,-1.80317182e-02,-2.70843893e-01, -1.00724655e-03,-1.58374906e-01, 2.18440127e-03,-2.51327287e-02, -3.61929163e-02,-6.34332672e-02,-7.41052181e-02,-1.71028838e-01,  3.54243964e-01,-1.42746493e-01, 2.61715800e-01, 1.74979642e-01,  3.52597803e-01,-2.57130135e-02, 2.19010919e-01,-7.37352595e-02,  8.58492851e-02, 2.15961337e-01, 5.78472130e-02, 4.47083898e-02, -1.43062070e-01, 2.77826726e-01, 2.27361426e-01, 9.42580104e-02, -1.55346813e-02, 2.05746561e-01,-1.23475142e-01,-2.79532492e-01, -4.01492476e-01, 1.19592644e-01,-1.98472619e-01,-7.52570182e-02, -2.45850068e-02, 7.30975196e-02,-2.66557932e-02,-7.96958581e-02, -1.01893626e-01, 3.40879649e-01,-1.61419392e-01, 2.03980699e-01,  1.82829961e-01,-2.10631013e-01,-2.55527467e-01,-2.48983741e-01,  2.03921840e-01, 2.69439667e-01,-1.23495152e-02, 9.35349837e-02,  2.91387141e-01,-2.13491395e-02,-1.67941097e-02, 2.27237582e-01,  2.65955776e-01, 5.19776978e-02, 2.10109383e-01, 1.99763536e-01,  2.11723998e-01, 1.13760985e-01, 4.65275526e-01, 3.17022890e-01;
		l1.Wiz << -0.24144492, 0.4342422 , 0.15423566, 0.12254014, 0.43711135, 0.20598862,  0.46859318,-0.22783513,-0.6565622 ,-0.65968096, 0.13810758, 0.22072467,  0.37679726, 0.9143584 , 0.18793797, 0.35318652, 0.45418358, 0.0998762 ,  1.4363301 ,-0.555704  ,-2.0569026 , 0.72954905, 0.6011492 , 1.2356896 , -0.9084837 , 0.74239266,-0.24208468,-0.24093324, 0.01816852, 1.2314405 , -0.88391006, 0.17602155,-0.5028315 , 0.0517101 ,-0.8498266 , 2.0841162 ,  1.4838197 ,-1.6235554 ,-0.6307086 ,-1.2754012 , 0.728864  ,-3.137036  , -0.26720423, 0.5284375 ,-0.07220549,-1.2291865 , 1.2933929 ,-0.58236736, -0.6040165 , 0.7366718 , 0.45454532,-0.5441226 ,-0.26322854, 0.7161246 ,  0.16261426,-0.79084074,-0.78617   ,-0.86925316,-0.40877852,-0.20573363, -0.08237986, 1.010621  ,-0.3033651 , 0.81575817,-0.91987735, 0.13691926, -0.8120038 , 0.16242026, 0.56061864,-0.12179098,-0.39965412,-0.06238662, -0.34645715,-0.9857764 ,-0.14163259,-0.26010805,-0.46339414, 0.04118817,  0.13168624, 0.3172483 , 0.16408332, 1.0757164 ,-0.7686474 , 0.7890617 , -1.176403  ,-1.0206816 ,-0.96678627, 1.9092203 , 0.6102925 ,-0.4411551 ,  0.89148897, 0.9828146 ,-2.4731295 , 1.2416228 , 0.44819024,-2.6254454 , -1.395504  , 0.16762532,-0.6281532 ,-0.45728305, 0.57513994, 0.64985377,  0.02812038,-0.58221596, 0.14086871, 0.5880201 ,-0.51998764,-0.48576015,  1.2765508 ,-0.04678346, 0.17983468, 1.2072678 ,-0.3826351 ,-0.20612119, -0.66492563,-0.17936641,-0.30889648, 0.29477796, 0.14461066,-0.38500744, -0.3224384 ,-0.39265266, 0.17339508,-0.12419401,-0.50634325,-0.63874954,  0.02715149, 0.5213512 ,-0.04278024, 0.42362377, 0.06370908, 0.34215936, -0.3571599 , 0.18837757, 0.0524821 ,-0.50638413,-0.5347471 , 0.32736763, -0.11732132, 0.1855539 , 0.08300685, 0.81499106,-0.4289728 , 0.82710737, -0.34251294, 0.43150887, 0.05484036, 0.9789513 , 0.2996692 ,-0.683336  , -0.98928416,-0.04400829, 0.9723919 ,-1.0365586 ,-0.28893006, 0.32764137, -0.80302113, 0.02157389, 0.8656182 ,-0.82118255,-0.19173856,-1.0935417 , -0.36205104,-0.5716545 ,-0.9125693 , 0.3680345 , 0.47415152, 0.49095267, -0.62477434, 0.82346475,-0.22198173,-0.15513004,-0.7455216 ,-0.10059267, -0.04375205, 0.56467223, 0.05941846, 0.59698063,-0.17933719, 0.2135987 ,  0.62004447,-0.29623356,-0.79953384, 0.40547442, 0.70421803,-0.1614237 ,  0.93757033, 0.42554784,-0.59000885, 0.290029  , 0.8279971 ,-0.39499736,  0.79649645,-0.2756034 , 0.95229733,-0.32087162,-0.82905614,-0.41968986,  0.07960888, 0.02425749,-0.06889886, 1.9636137 ,-0.1398696 , 0.25246793,  0.0035723 , 0.6424041 , 0.03938926, 0.694188  ,-0.177146  ,-0.19963606, -0.18664068,-0.02631741, 0.20339233,-0.4738266 ,-1.09753   , 0.11297919,  0.66444916,-0.23906118, 0.09514676, 0.11584771,-0.5071367 , 0.2956659 ,  0.6083076 , 0.35298187,-0.11095064, 0.407085  , 0.57703763, 0.11983375,  0.5439961 ,-0.04527342,-0.06037755,-0.01417012,-0.03867563,-0.48421392,  0.96600014, 0.20766665,-0.24129497, 0.6045227 , 0.46840364, 0.4420158 , -1.8068608 ,-0.13056314,-0.8518138 , 0.37084183, 1.4904943 ,-0.85485643, -0.90288824,-0.8993093 , 1.1186327 ,-1.8231668 , 0.3013725 , 0.50672823, -0.5924819 ,-1.0308278 , 0.6887605 , 0.16038229;
		l1.Win <<  5.45137882e-01, 2.99521059e-01, 5.87196708e-01, 1.35272130e-01, -1.78449646e-01, 3.01212221e-01, 1.08584575e-01, 3.20950150e-01, -1.31978989e-01, 3.81320596e-01, 2.51334637e-01, 1.48232445e-01,  3.87396179e-02, 2.34004244e-01,-2.25614443e-01, 3.31137955e-01, -6.51020370e-03, 1.12657927e-01, 1.22097008e-01,-1.82549670e-01, -1.98369727e-01,-2.02205181e-01,-2.17453256e-01,-1.39866835e-02,  3.60687152e-02,-1.99785024e-01, 2.74235576e-01,-2.00787256e-03,  3.88975263e-01,-6.89047277e-02, 2.08513886e-02, 1.73706412e-01, -6.49751499e-02,-6.78420365e-02,-2.38851205e-01, 8.67789984e-03,  3.59915704e-01,-2.05743209e-01,-4.53105271e-02, 5.50037362e-02,  2.28069238e-02,-3.50118071e-01, 1.15773477e-01, 1.52021438e-01,  6.99739158e-02,-1.63297966e-01,-1.91349313e-02,-2.65214264e-01,  2.32168287e-01,-2.87714385e-04, 7.05900371e-01,-1.13441855e-01, -3.97783190e-01,-3.21717858e-02, 4.44982424e-02, 1.60456926e-01, -2.02332497e-01, 1.55728772e-01,-8.45021382e-02,-9.15601104e-02, -2.27002934e-01, 6.65660381e-01,-7.04886690e-02,-3.92258018e-01, -3.17666024e-01,-2.03042343e-01,-2.88879544e-01,-2.10717887e-01,  2.17323586e-01, 2.10277334e-01, 2.68901557e-01,-2.21157119e-01, -1.88824505e-01,-3.33347440e-01,-1.24172084e-01,-1.27674356e-01,  2.36197039e-02,-1.70389280e-01,-1.96494550e-01, 3.53157856e-02, -2.47668147e-01,-1.01517059e-01, 4.47323844e-02,-6.04006015e-02, -4.06441331e-01, 3.52756046e-02, 3.08660656e-01,-3.64246666e-01,  8.83657560e-02, 1.89089030e-01,-1.44338217e-02,-3.69891934e-02, -2.74444669e-01, 3.71268719e-01,-2.17451543e-01, 1.68029498e-02,  5.47987074e-02, 1.22953691e-01, 4.03363973e-01,-1.65748104e-01, -1.57205626e-01,-6.67246655e-02,-1.14256196e-01, 3.14067572e-01,  2.04765275e-01,-7.68281370e-02,-5.32107949e-02, 6.69695735e-02, -2.29098406e-02, 6.38144910e-02,-9.66816023e-02, 1.74957037e-01,  1.16211534e-01, 7.51474053e-02,-2.84277707e-01, 2.30064452e-01, -2.00762302e-01, 5.12294061e-02,-1.91450015e-01,-3.02566975e-01, -2.05364287e-01,-3.28451872e-01,-1.90791786e-01, 7.41372034e-02, -2.05439895e-01,-2.00294986e-01,-2.09580585e-01, 1.71378136e-01,  2.22984120e-01,-2.46598884e-01, 6.39444366e-02,-8.62942711e-02, -5.21809123e-02, 1.80834725e-01, 2.25791797e-01, 2.85299301e-01, -1.96057603e-01, 2.03804165e-01,-2.21867427e-01, 1.52044788e-01,  2.40874797e-01,-1.21531241e-01,-7.95729086e-02,-1.06039502e-01, -5.46801537e-02, 9.15801823e-02, 1.71358943e-01, 1.04681015e-01, -1.42680332e-01, 1.03916004e-01, 9.38738510e-02,-9.05555189e-02, -1.91806585e-01, 2.91039467e-01,-1.92166388e-01, 9.25926715e-02, -7.61750340e-02, 1.94092914e-01,-1.76960319e-01, 1.36066183e-01, -1.88393727e-01,-4.70281430e-02,-1.58479035e-01,-1.09223604e-01,  3.14083725e-01, 1.63377985e-01, 2.72666812e-01, 1.22615874e-01,  2.32105441e-02,-1.10799111e-01,-1.79457530e-01, 1.57692760e-01, -1.12455655e-02,-3.24215174e-01,-1.64338961e-01, 8.16674307e-02, -3.63625586e-01, 2.21393317e-01,-9.86238196e-02, 2.14911610e-01,  2.08232582e-01, 1.04405448e-01,-7.09898323e-02,-9.16929822e-03,  2.76468962e-01,-9.92576927e-02,-7.16937110e-02, 2.10856304e-01,  1.59662127e-01,-1.51945785e-01, 3.44727258e-03, 8.10066387e-02,  1.16600432e-01,-6.72030672e-02,-1.28232971e-01, 1.41229674e-01, -3.34896833e-01,-1.68175384e-01, 2.51831979e-01, 1.35618716e-01, -4.32643890e-02, 2.53580481e-01,-1.82052364e-03,-2.28411794e-01, -1.60775378e-01, 6.98534921e-02, 3.21707428e-02, 8.27715099e-02, -6.03899136e-02,-1.37139231e-01, 1.37744829e-01,-2.20594600e-01, -2.99641460e-01, 1.63464621e-01,-4.10280414e-02,-2.74810623e-02, -1.68747306e-01,-1.10367753e-01,-8.76459256e-02,-1.21941552e-01, -3.48895043e-02, 9.66291223e-03,-2.46833041e-01, 6.41977564e-02, -2.19784498e-01, 8.64122435e-02,-2.41774723e-01, 1.50520086e-01,  5.32007264e-03, 9.71568674e-02,-1.80997420e-03, 1.49312327e-02, -1.74191535e-01, 5.40147498e-02,-1.98058233e-01, 2.58505076e-01, -5.27617112e-02, 1.76878020e-01, 1.69447124e-01,-1.80715442e-01,  6.00856058e-02, 2.56979644e-01, 7.56455839e-01, 1.41397953e-01,  3.02384526e-01, 3.00650038e-02,-2.30792731e-01, 2.41170481e-01, -1.35876879e-01, 1.50220513e-01,-1.67477369e-01,-4.66190167e-02,  2.70270675e-01,-1.88310936e-01, 6.32281825e-02, 1.72605440e-02;

		l1.Whr <<  9.57369387e-01, 2.25065425e-01, 1.15134880e-01, 8.87429595e-01,  5.00786193e-02,-8.89344364e-02, 1.37362674e-01, 5.27932458e-02,  2.66916335e-01, 8.81679177e-01, 1.54633090e-01, 5.53678870e-01, -3.57465371e-02,-7.49415681e-02, 2.19064161e-01, 3.29076916e-01, -8.61005932e-02,-2.65294537e-02, 1.50066577e-02,-4.07251455e-02, -9.59125981e-02,-4.23755944e-01,-1.40136898e-01,-3.71788107e-02,  2.25722402e-01,-1.91205908e-02,-6.16362244e-02,-1.12140596e+00,  1.90665573e-01,-2.19960898e-01, 1.37053922e-01, 4.37029421e-01,  4.27652001e-01, 1.89396814e-01, 3.42189312e-01, 4.50616926e-02, -1.99782640e-01, 3.76639813e-01, 8.48031566e-02, 4.86332923e-01,  2.01290190e-01,-9.09558833e-01,-8.08025186e-04,-1.91237643e-01, -3.18934560e-01, 2.08958536e-02, 3.90044302e-01, 8.65382612e-01, -9.95793268e-02, 4.01387870e-01,-5.85697405e-02, 1.39917925e-01,  2.00094059e-01, 2.29778573e-01,-1.60862923e-01, 1.78422630e-01, -1.21839099e-01,-6.52704477e-01,-1.40116274e-01,-5.53179860e-01,  5.27172275e-02,-1.53374881e-01, 5.05201072e-02,-5.57666600e-01, -1.65749699e-01,-8.61528292e-02,-4.87269819e-01, 8.17306805e-03,  3.11905500e-02, 2.77023893e-02,-3.44940633e-01, 1.71494663e-01, -3.41360897e-01, 1.71938539e-01, 1.93223923e-01, 4.57473010e-01,  2.73294538e-01,-1.74348786e-01, 5.74784689e-02, 3.11741531e-01, -1.25560439e+00,-2.43838847e-01,-1.74719524e-02,-1.20025682e+00,  2.86667109e-01, 8.13360035e-01,-1.94200352e-01,-5.67941368e-01, -3.36289912e-01, 5.41375816e-01,-3.44742388e-01,-4.77622956e-01, -9.58661288e-02, 1.46430686e-01,-9.65427607e-02, 2.53835559e-01,  4.38543975e-01,-1.93921775e-02, 5.01802526e-02,-2.25934863e-01, -8.20071809e-03, 1.98179960e-01, 1.08077355e-01,-4.80682924e-02, -1.67540554e-02, 1.09367101e-02,-1.99914217e-01, 5.92122793e-01, -3.58597070e-01,-1.82294786e-01,-1.75019372e-02, 3.14541101e-01,  1.44805655e-01,-6.68499544e-02, 1.15495808e-01,-2.33055934e-01,  6.06969744e-02, 3.75711143e-01, 3.52905989e-02,-9.72213149e-02,  1.10549457e-01, 2.04609245e-01, 7.79563328e-03,-1.29824281e-01, -4.48383465e-02,-1.29960731e-01,-7.04225600e-02,-5.23389161e-01,  1.73012897e-01, 2.26328373e-01,-5.07627688e-02, 1.15566164e-01, -3.25283229e-01,-2.98716187e-01,-1.00084245e-01, 1.62267685e-01, -2.40782946e-01, 1.70727804e-01, 1.61950156e-01, 1.85756892e-01,  1.69041350e-01, 9.53104496e-02, 3.30307275e-01,-1.14086634e-02,  2.09273055e-01,-1.30801782e-01,-2.50689089e-01, 1.13323376e-01,  1.52771687e-02, 2.60588855e-01, 1.72017798e-01, 3.47116202e-01,  2.13076785e-01,-6.86049685e-02, 1.93541974e-01,-1.84564424e+00,  1.02617450e-01, 3.27753052e-02, 7.09025487e-02,-4.17260945e-01, -3.91509309e-02, 1.31163910e-01,-2.47605070e-02,-1.13834843e-01, -2.60253757e-01, 3.90880406e-01,-8.30140412e-02,-3.30638997e-02,  9.11970362e-02,-1.53182754e-02,-1.70553122e-02, 3.86589438e-01, -9.74508077e-02,-1.59275815e-01, 5.90411685e-02,-5.76851904e-01,  7.74437904e-01, 1.82165340e-01, 3.99425805e-01, 9.23950449e-02,  5.33340648e-02,-8.64459276e-02, 2.91118354e-01,-3.56134593e-01, -2.96578966e-02,-4.12580490e-01,-3.33438128e-01,-6.51051283e-01, -1.74098145e-02,-3.15147698e-01, 2.28928223e-01,-3.69872212e-01,  5.17630279e-01, 3.87982100e-01, 2.60260105e-01,-1.86046124e-01, -6.54994100e-02, 4.97117698e-01, 1.37384549e-01, 1.14140406e-01,  2.92854339e-01,-9.53320861e-01, 1.67654175e-03, 1.57003820e+00, -6.74990565e-02,-1.53972119e-01, 1.05084972e-02, 5.85173249e-01,  5.19196510e-01,-5.94904944e-02,-1.16803013e-01, 1.36923313e-01,  1.37350425e-01, 2.52371997e-01,-2.27137938e-01, 2.60246307e-01,  5.16263060e-02, 2.67805517e-01,-1.29196033e-01, 2.96202213e-01,  2.54263669e-01, 6.57542497e-02, 2.57313132e-01,-1.89739987e-01,  2.24513224e-05,-8.18995237e-02, 8.16035047e-02, 1.87101949e-03, -8.36762041e-02,-2.32137129e-01,-3.18165794e-02,-2.92599589e-01, -3.68975149e-03,-1.59170896e-01,-2.23980904e-01, 2.98879981e-01,  1.89722002e-01, 3.00026834e-01,-2.23992378e-01, 5.81121504e-01,  9.42971826e-01, 6.44710183e-01, 1.84034988e-01,-2.14912891e-01, -1.30884811e-01, 6.88648224e-01, 5.82453251e-01, 2.87072986e-01,  1.02416001e-01,-7.13595033e-01,-1.94801912e-01, 1.27770936e+00, -9.34430882e-02,-2.37194523e-01, 2.78198779e-01, 2.06228003e-01;
		l1.Whz << -0.6505225 ,-0.5152527 ,-1.0347158 , 0.40091047, 0.02736944,-1.333943  , -0.4723361 ,-0.1884744 ,-0.21735018,-0.9318657 , 0.13384184, 0.3542035 ,  0.23334938, 0.09490959,-0.11678494,-0.47086373, 3.1590884 , 0.08556122,  0.47014412, 0.10702333, 0.3980178 , 1.5548704 , 0.21536808,-1.6863152 ,  1.5534568 ,-0.88897276,-0.12920138, 0.08190269, 0.27196765, 0.5880112 , -0.14996381,-0.34360182,-2.7111723 ,-0.6696952 ,-0.83995706,-0.90063834, -0.02205988,-1.1578547 ,-1.056288  , 5.458368  ,-1.4416485 , 1.7146313 , -0.9149042 ,-5.4954424 ,-0.58175445,-0.87663466, 0.7775577 , 2.198742  , -0.186181  ,-0.23452273,-1.1160032 , 1.4147351 , 0.10150176,-0.39953655, -0.12742208, 0.17549245, 0.44739434,-0.229246  , 0.25769448, 0.8920655 ,  0.13118376, 0.1422659 , 0.16744046,-0.05973908,-0.01666977,-0.02705854, -0.7074137 , 0.7209004 ,-0.30928004,-1.2781672 ,-0.3630313 ,-0.12738128, -0.64100087, 0.29933625,-0.129873  , 0.9671495 , 0.2496027 , 0.27628118,  0.4500054 , 0.06114534, 4.4913545 , 1.4672787 , 0.34593013, 2.1263185 , -1.8050338 ,-2.8689635 , 0.98368376,-3.6623654 , 0.22187184, 0.01141743, -0.97957295, 4.611237  ,-0.72336847,-0.9584033 , 1.0604204 , 3.4301367 , -0.4133303 ,-1.0751451 , 0.21753912,-0.8968855 ,-0.21288922, 0.02893898,  0.766083  , 0.8828438 ,-0.0560817 ,-0.25771293, 0.44996393, 0.01663468, -0.09034093,-0.0838993 ,-0.18247363,-0.68899554, 0.6465405 ,-0.16238967, -1.2782414 , 1.1628233 , 0.31780028,-1.0518768 , 0.5881276 , 1.0232557 ,  0.11765433,-0.14801773, 0.05986989, 0.27584448, 0.41832393, 0.25096866,  0.22315222, 0.6388688 , 0.9020419 ,-0.22582234,-0.479675  , 1.0115074 , -0.22964898,-1.3486221 ,-0.47401327,-0.41228938,-0.5584666 ,-0.38858   , -0.065354  , 1.466915  ,-0.24288511,-0.15458372, 0.1532937 ,-0.10337043, -0.07937063, 0.8569167 , 0.54585487, 0.16760334,-0.65217495,-0.7141108 , -0.13270932, 0.4214138 ,-1.2132778 ,-0.96755856,-2.183462  ,-2.4070444 , -0.78240764,-0.82847536, 1.3579916 , 0.20921846, 0.5532231 ,-0.30214834, -1.0496614 , 0.9940177 ,-0.16928335, 0.04370091, 0.7210897 , 1.1754282 , -0.34632897,-0.31670463, 0.6538995 ,-0.5924333 , 1.6021764 ,-0.09836411,  0.28690302,-1.5039635 , 0.20707098, 0.6474052 ,-0.22975783,-0.35565212, -0.80596673,-0.4391154 , 0.09826094, 0.6242162 ,-0.4897834 , 0.30498135, -0.44206223,-0.3081594 ,-0.51437086,-0.3800882 , 0.6867247 , 0.10787579, -0.5227783 , 0.14229238, 1.0116568 ,-0.59816355, 0.3096537 , 1.3720717 , -0.1441247 ,-0.04473442, 1.0633233 ,-1.1457952 ,-0.04120228,-1.5661271 ,  0.23816665,-0.20971118,-0.37870976,-0.71820587,-0.23257743, 0.765725  ,  0.7590154 , 0.1755158 ,-0.10904756,-0.15741745, 0.4943686 , 1.9340254 , -0.12462118, 0.07573955,-0.10216534,-0.04406728,-1.1793212 ,-0.3621169 ,  0.6751777 , 1.1368732 ,-1.2350556 ,-0.30606714,-0.86490756,-0.6412052 ,  0.2541294 ,-0.43793184,-0.49337065, 0.32026216,-0.12020611, 0.69522554,  0.46214783, 0.38059583, 0.15498441, 0.54559183,-0.27486137,-0.16520384, -1.2933075 , 0.23584585,-0.717478  , 0.63278913,-0.35003033,-0.4131179 ,  0.7855569 , 0.68998647,-1.2215055 ,-0.88078856,-0.3374636 ,-1.6311688 , -0.4528978 ,-0.7834071 , 0.7320387 ,-1.4136764 ;
		l1.Whn <<  3.54382694e-01,-5.23899160e-02, 4.96065766e-01,-6.45628989e-01, -1.12243809e-01, 4.72349048e-01, 3.28160524e-01, 1.68685570e-01,  9.28045660e-02,-5.77187061e-01,-2.92804167e-02,-2.68139750e-01, -1.52358785e-01, 1.16764829e-01,-7.44346082e-02,-5.51505029e-01,  3.78599465e-01, 1.09921545e-01, 6.43133298e-02, 2.93378294e-01, -1.09211899e-01, 5.07187247e-02,-1.48453005e-02,-2.31596529e-01, -2.69473922e-02,-3.99597287e-01,-2.34550267e-01, 5.05590141e-01, -4.86039072e-02, 2.06310377e-01, 1.57763153e-01, 1.64643168e-01, -5.48978150e-02,-2.50656661e-02, 3.85027617e-01,-3.67508680e-01,  3.00232202e-01, 1.60867348e-01,-1.02173768e-01, 3.15487832e-01, -8.67444426e-02, 3.62143457e-01, 1.41644314e-01, 4.89646375e-01, -7.79941529e-02,-1.68082967e-01,-3.70145105e-02,-1.01085745e-01, -1.29924901e-02,-1.60702407e-01,-4.17012483e-01, 3.76138955e-01, -5.05644262e-01,-7.30957747e-01,-2.89059967e-01, 1.85334664e-02, -3.57444376e-01, 6.05565161e-02, 3.27739954e-01, 2.47303978e-01, -2.14239597e-01,-3.31442446e-01,-8.97153690e-02, 1.88194066e-01,  2.68831134e-01, 1.24870278e-01, 3.39833051e-01,-2.43124172e-01, -2.51079258e-02, 2.87698060e-01, 3.32241267e-01, 1.53859049e-01,  2.54950643e-01, 1.51687577e-01,-6.33900017e-02,-1.84364483e-01,  8.55468512e-02, 2.47008353e-01,-2.40077645e-01, 1.65675983e-01,  9.55765545e-01, 3.56411248e-01,-1.48447692e-01, 5.06953061e-01,  4.37442176e-02, 2.37583920e-01, 3.02416474e-01, 2.23345291e-02,  5.47163725e-01,-3.71564835e-01, 8.95800367e-02,-1.59702420e-01, -3.08380336e-01, 5.29626198e-02,-1.17601842e-01,-1.58835158e-01,  8.72893780e-02,-9.60532799e-02, 1.08702056e-01,-2.96237141e-01, -1.62139535e-01, 4.91142422e-01,-2.06677780e-01, 1.23654254e-01, -1.87012181e-01,-2.91144192e-01, 1.89787552e-01,-9.06430408e-02,  1.16030440e-01,-1.50557175e-01, 5.21327704e-02,-4.54321563e-01,  2.57753232e-03,-1.05402879e-01, 3.18898797e-01,-1.34800375e-01, -1.67395085e-01, 1.59540892e-01, 2.71226346e-01, 4.14599687e-01,  1.15082584e-01,-1.85292497e-01,-1.61359057e-01,-8.29985797e-01,  2.34136894e-01, 8.79270062e-02, 1.56722665e-01,-1.69871658e-01,  1.62099212e-01, 2.76939780e-01, 3.02579999e-01,-3.74259412e-01,  5.98074049e-02, 4.41917390e-01, 3.84483077e-02, 7.92060941e-02, -2.94512901e-02,-2.68376499e-01, 2.83055697e-02, 1.11518919e-01, -2.17970908e-01, 6.66491687e-02,-4.33714353e-02,-3.42374705e-02,  2.86183625e-01,-9.76196155e-02,-2.23612681e-01, 1.43296018e-01, -4.47757728e-02,-1.02069512e-01, 2.35265747e-01, 1.27839237e-01, -1.66423008e-01, 2.14996129e-01,-2.33819336e-02,-1.64121103e+00, -1.68021709e-01,-1.97958708e-01, 2.40317702e-01,-3.86650592e-01, -1.08056739e-01,-1.63882568e-01, 1.29130771e-02, 4.59025770e-01, -1.73707843e-01, 2.02382319e-02,-4.15707864e-02,-1.66794270e-01,  1.99034512e-01,-2.13897228e-01,-1.00778244e-01,-4.50033426e-01,  1.35978103e-01, 9.50797126e-02, 1.45827487e-01,-2.19076201e-02, -4.20858860e-01,-2.14672506e-01, 1.20161362e-01,-5.26446819e-01,  2.43715942e-01, 8.99428651e-02,-4.10735011e-02,-1.50247209e-03, -2.42124349e-01, 2.01711521e-01,-2.59161800e-01, 5.97791731e-01,  1.76912606e-01, 2.16121763e-01, 9.22916308e-02,-1.80698663e-01, -1.43371597e-01,-6.48788437e-02,-1.86354369e-01, 3.48048449e-01,  1.74174160e-01,-2.27315336e-01, 1.28294125e-01,-1.63727626e-01, -1.22321725e-01,-3.36451977e-01, 9.07315835e-02, 4.90735352e-01,  3.39300931e-01, 2.62412101e-01,-1.36385322e-01, 4.93535429e-01,  3.11096936e-01,-2.54025966e-01,-4.43926193e-02, 1.09731272e-01,  1.35574996e-01, 5.13569713e-02, 6.00396190e-03,-1.28788743e-02,  2.55365670e-01, 1.65807635e-01, 3.48321162e-02,-1.10703826e-01,  2.57885098e-01,-1.32401600e-01,-1.69769764e-01, 3.55061650e-01,  7.89678469e-02,-6.41209185e-02,-1.93188086e-01, 2.28034183e-01, -2.43463665e-01, 1.45554066e-01, 2.02280693e-02,-6.10691868e-02,  8.55302438e-02,-2.39898395e-02,-3.70878913e-02,-3.74729186e-02, -2.25868300e-01, 4.67512161e-02,-2.47969255e-02, 3.88371646e-01, -1.29016265e-01, 1.06748134e-01,-2.45647356e-01,-3.01810175e-01, -1.32816777e-01, 2.08507836e-01, 1.37337357e-01, 4.74440932e-01,  8.33785459e-02,-4.85967159e-01,-1.76892325e-01, 8.21292162e-01,  1.45746425e-01, 2.42580678e-02, 2.96926558e-01, 4.30174097e-02;

		l1.bir <<  0.27537605, 0.18020132, 0.05460336, 0.16107713,-0.00995452,-0.0672358 , -0.1287445 ,-0.07790763, 0.2859213 , 0.22453873, 0.28219587,-0.08893415,  0.02291404,-0.16544986, 0.03856223, 0.2107818 ;
		l1.biz << -0.18862699, 0.00550344, 0.7855491 ,-0.5463821 ,-0.13072427, 0.9905611 , -0.72030056,-0.12897384,-0.11329145, 0.7120717 ,-1.181522  , 1.0726281 , -0.46145567,-0.37188226, 0.19852328, 0.5158631 ;
		l1.bin <<  0.09652667, 0.06155836,-0.04245864, 0.13927014, 0.07026554, 0.10911837, -0.00919915, 0.16348508, 0.04351491,-0.06887151, 0.02885628,-0.11639573, -0.3016408 ,-0.1700093 , 0.14134778,-0.12830006;

		l1.bhr <<  0.22414763,-0.22506887, 0.2126975 , 0.03783594,-0.11659217,-0.2785134 ,  0.28497463,-0.02880818, 0.09368178, 0.23879535, 0.25021672, 0.19465984, -0.01377882,-0.10037865, 0.09510893, 0.28953546;
		l1.bhz << -0.04739672,-0.16099592, 0.3919905 ,-0.61403173,-0.5226063 , 0.971736  , -0.7273371 ,-0.1305485 ,-0.26329756, 0.5675337 ,-1.3178856 , 0.9794231 , -0.23155811,-0.40301868, 0.26848695, 0.08659443;
		l1.bhn <<  0.08745799, 0.14257735, 0.03664549,-0.17753232,-0.21249141, 0.20191975,  0.14130701,-0.10492832,-0.03167261,-0.04270551,-0.2727418 , 0.09861345,  0.06306724,-0.11212786, 0.12065415,-0.15184857;

		l1.htn1 << 0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.,0.;

		f.A <<  0.05358513,-0.10366008, 0.01574804, 0.16906846,-0.2670302 ,-0.02227836,  0.08064642,-0.06410672, 0.23408759, 0.01054003,-0.10547752, 0.20525861, -0.06817457,-0.11747938,-0.19088854, 0.11092967;
		f.b << -0.15442017;
	}

	void apply_model(T* x, T* y) {
		l0.apply_layer(*x);
		l1.apply_layer(l0.ht);
		*y=f.apply_layer(l1.ht);
	}
};