#include"Header.h"

void lines(double aa, double bb, double cc, double dd)
{
	GLfloat lineVertices[] =
	{
		aa, bb,
		cc, dd
	};

	glEnable(GL_LINE_SMOOTH);
	glLineWidth(3);
	glEnableClientState(GL_VERTEX_ARRAY);  // tell OpenGL that you're using a vertex array 
	glVertexPointer(2, GL_FLOAT, 0, lineVertices);  // line to the vertices to be used
	glDrawArrays(GL_LINES, 0, 2);    // draw the vertixes
	glDisableClientState(GL_VERTEX_ARRAY); //tell OpenGL that you're finished using the vertex array
	glDisable(GL_LINE_SMOOTH);
}

void drawLadders()
{
	ladder1();
	ladder2();
	ladder3();
	ladder4();
	ladder5();
	ladder6();
	ladder7();


}
void ladder1()
{
	//two ladder1 line
	lines(0.4993303790218, 0.7831442753942, 1.1897290044701, 2.2948791966344);
	lines(0.8326262671692, 0.6522066050506, 1.5944454400777, 2.2924928949412);

	//connect two ladder lines
	lines(0.5851754284143, 0.9523792188646, 0.9066987706306, 0.9072252946833);
	lines(0.7203047516997, 1.2477742775881, 1.0808412197727, 1.202707219079);
	lines(0.8780394564816, 1.6308442749157, 1.2385759245546, 1.5857772164066);
	lines(0.9999, 2.0, 1.4413776878457, 1.9663136844796);

}


void ladder2()
{
	//two ladder1 line
	lines(3.43437213975, 0.8019321221942, 4.2325888273977, 3.5391158984275);
	lines(3.90777011172, 0.6725729333825, 4.6767667318278, 3.4489767772149);

	//connect two ladder lines
	lines(3.5183514495099, 1.015226472254, 4.0, 0.929999);
	lines(3.6525243634508, 1.4201691595574, 4.1218663614397, 1.3146052743029);
	lines(3.7694792200191, 1.8038156718895, 4.2010392753806, 1.7282517866349);
	lines(3.8450431052737, 2.1630260694761, 4.3232986462921, 2.1074621842215);
	lines(3.9606069905283, 2.5608454957491, 4.4328625315467, 2.5152816104945);
	lines(4.05, 2.90099, 4.5084264168012, 2.8961461801992);
	lines(4.1333078579845, 3.2657170230069, 4.613078579845, 3.2457170230069);

}

void ladder3()
{
	//two ladder1 line
	lines(8.0997599397194, 1.5612969300666, 6.4026551485684, 5.3063710820733);
	lines(8.4917522799333, 1.7182517866349, 6.7590836035277, 5.5474988525825);


	//connect two ladder lines
	lines(7.9356357791646, 1.9929478185109, 8.2656204935919, 2.1441806435359);
	lines(7.7217736515299, 2.3999499711492, 8.1266094962746, 2.593678935216);
	lines(7.5851996197071, 2.7981210907814, 7.9072726271827, 2.939);
	lines(7.3736883449447, 3.1803437632698, 7.733217235465, 3.3494173986857);
	lines(7.1774678443523, 3.6909203789317, 7.5267381850145, 3.8729701424496);
	lines(7.0081303975689, 4.0364049396032, 7.4002008623761, 4.2022404831118);
	lines(6.8553514238809, 4.4219628869791, 7.2081510988583, 4.601852451027);
	lines(6.6411282449306, 4.8460766290926, 7.0081303975689, 4.9995777054117);
	lines(6.462299421556, 5.1822760851799, 6.8236710964443, 5.3646674759507);

}

void ladder4()
{
	//two ladder1 line
	lines(2.8652035651156, 3.5533176447517, 7.429323408413, 8.2235061521041);
	lines(2.4848602448408, 3.895626632999, 7.1250487521932, 8.527780808324);


	//connect two ladder lines
	lines(2.6410795919111, 4.0819599412309, 3.0645891203737, 3.7085757530706);
	lines(2.9608617973256, 4.4021670065269, 3.299343163735, 4.051846594022);
	lines(3.1876608288724, 4.6168389166303, 3.5491402338512, 4.2513555887903);
	lines(3.4824528481478, 4.9233936580776, 3.8650644690178, 4.5907820372076);
	lines(3.79251655663066, 5.200377648052, 4.1270990076369, 4.8963085708141);
	lines(4.0602851921893, 5.5069273616382, 4.4440829976116, 5.1675638326047);
	lines(4.54411680848751, 5.898515802528, 4.8909658902975, 5.6287179971064);
	lines(4.8439663192141,  6.2017788618354, 5.1758997605443, 5.9419810564131);
	lines(5.1064924239039, 6.4802632610990, 5.4456120497866, 6.2197710643193);
	lines(5.5011040447739, 6.9279092187958, 5.8789018501963, 6.6202470492814);
	lines(5.781100880347486, 7.21343575240, 6.1501571119868, 6.909366675164);
	lines(6.0902076606312, 7.4946910141929, 6.4050054660536, 7.2148932087705);
	lines(6.4678192815012, 7.8887600914311, 6.7976170869236, 7.5789622860087);
	lines(6.7669389073839, 8.1678797173137, 7.0767367128062, 7.8580819118913);
	lines(6.9732447178189, 8.4205924354725, 7.2909068873333, 8.1293371736819);

}

void ladder5()
{
	//two ladder1 line
	lines(1.2005105297895, 5.6250094608568, 0.429170042104, 7.3149777416132);
	lines(1.6018072925791, 5.7819625348521, 0.7979090743995, 7.5058448934099);

	//connect two ladder lines
	lines(1.0095624591962, 6.0078281556028, 1.3957213703805, 6.220874532445);
	lines(0.8339949965981, 6.3915170642374, 1.2079011445886, 6.5971654456322);
	lines(0.6307801010038, 6.7341185196274, 1.0609, 7);
	lines(0.5022606930047, 7.0932434380198, 0.8862636194137, 7.31834399500349);


}


void ladder6()
{
	//two ladder1 line
	lines(8.360813263807, 7.7136651192018, 9.137320867188, 9.4388521703601);
	lines(8.790805333997, 7.6488838896037, 9.501227015179, 9.2892897111639);

	//connect two ladder lines
	lines(8.552117956404, 8.1580088079961, 8.9129771783942, 8.0349698118023);
	lines(8.672428748008,  8.50064925958, 9.097584079923, 8.3866961855847);
	lines(8.900959487961, 8.829990023696, 9.2788833263847, 8.7132117187762);
	lines(9.0181959487961, 9.201990023696, 9.4168833263847, 9.0732117187762);

}

void ladder7()
{
	//two ladder1 line
	lines(2.145578213423,  7.544102660005, 1.3612901734255, 9.3304193874428);
	lines(2.5540507855152, 7.767491688842, 1.797627455176, 9.5715490637218);

	//connect two ladder lines
	lines(1.9916243464467, 7.8320103939583, 2.4420969185389, 8.1100587753531);
	lines(1.8123531760980, 8.190058775331, 2.2776707889702, 8.4733071567479);
	lines(1.6512353176098, 8.6000587753531, 2.1376707889702, 8.8933071567479);
	lines(1.4999594879612, 9.009990023696, 1.91788833263847, 9.2562117187762);

}
