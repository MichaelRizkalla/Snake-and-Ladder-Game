#include <SnakeLadder.h>

static int PlayersNumbers = 0;
// mouse clecked funcation
//check if the user pressed on "Trun" || "STOP"
void mouseClicks(int button, int state, int x, int y)
{
	//help to select the mouse postion cleck
	//printf("%d %d\n", x, y); //to select th x & y mousepostion  

	if (start == 0) //user should select number of players before rolling the Dice or doing nothing && can'tchange number of players while playing until ending this game
	{
		//2 player
		if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && x >= 761 && x <= 800 && y >= 78 && y <= 105)
		{
			PlayersNumbers = 2;
			start = 1;

		}

		//3 player
		if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && x >= 817 && x <= 850 && y >= 78 && y <= 105)
		{
			PlayersNumbers = 3;
			start = 1;

		}

		//4 player
		if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && x >= 875 && x <= 910 && y >= 78 && y <= 105)
		{
			PlayersNumbers = 4;
			start = 1;

		}

		//5 player
		if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && x >= 925 && x <= 970 && y >= 78 && y <= 105)
		{
			PlayersNumbers = 5;
			start = 1;
		}
	}

	else if (start == 1) //user select number of players so start playing
	{
		if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && x >= 750 && x <= 859 && y >= 668 && y <= 701)
		{
			onTurnMouse = 1;
			onStopMouse = 0;

		}

		if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && x >= 871 && x <= 979 && y >= 668 && y <= 701)
		{
			onStopMouse = 1;
			onTurnMouse = 0;

		}

	}

	//cleck to write Player Name
   if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && x >= 830 && x <= 980 && y >= 135 && y <= 185)
	{
		edit = 1;
	}
	else if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && x >= 830 && x <= 980 && y >= 200 && y <= 250)
	{
		edit = 1;
	}
	else if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && x >= 830 && x <= 980 && y >= 265 && y <= 315)
	{
		edit = 1;
	}
	else if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && x >= 830 && x <= 980 && y >= 330 && y <= 380)
	{
		edit = 1;
	}
	else if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && x >= 830 && x <= 980 && y >= 395 && y <= 450)
	{
		edit = 1;
	}

	
	glutPostRedisplay();
}


//draw Player Blocks
void drawBlocksCircles()
{
	NumberofPlayer();

	//draw a players circle to play with
	drawAllCircle(PlayersNumbers);  //Player.c
	storeStruct();

	//cannot be one player
	if (PlayersNumbers == 2)
	{
		drawRectangle(7.6, 8.3, p1.color);	//player 1
		displayPlayerInformation(p1.playername, 1, 0.57);

		drawRectangle(6.7, 7.4, p2.color);      //player 2
		displayPlayerInformation(p2.playername, 2, 0.39);

	}

	if (PlayersNumbers == 3)
	{
		drawRectangle(7.6, 8.3, p1.color);	//player 1
		displayPlayerInformation(p1.playername, 1, 0.57);

		drawRectangle(6.7, 7.4, p2.color);      //player 2
		displayPlayerInformation(p2.playername, 2, 0.39);

		drawRectangle(5.8, 6.5, p3.color);    //player 3
		displayPlayerInformation(p3.playername, 3, 0.213);


	}

	if (PlayersNumbers == 4)
	{
		drawRectangle(7.6, 8.3, p1.color);	//player 1
		displayPlayerInformation(p1.playername, 1, 0.57);

		drawRectangle(6.7, 7.4, p2.color);      //player 2
		displayPlayerInformation(p2.playername, 2, 0.39);

		drawRectangle(5.8, 6.5, p3.color);    //player 3
		displayPlayerInformation(p3.playername, 3, 0.213);

		drawRectangle(4.9, 5.6, p4.color);	  //player 4
		displayPlayerInformation(p4.playername, 4, 0.03);

	}

	else if (PlayersNumbers == 5)
	{
		drawRectangle(7.6, 8.3, p1.color);	//player 1
		displayPlayerInformation(p1.playername, 1, 0.57);

		drawRectangle(6.7, 7.4, p2.color);      //player 2
		displayPlayerInformation(p2.playername, 2, 0.39);

		drawRectangle(5.8, 6.5, p3.color);    //player 3
		displayPlayerInformation(p3.playername, 3, 0.213);

		drawRectangle(4.9, 5.6, p4.color);	  //player 4
		displayPlayerInformation(p4.playername, 4, 0.03);

		drawRectangle(4.0, 4.7, p5.color);    //player 5
		displayPlayerInformation(p5.playername, 5, -0.152);

	}

	drawRectangle(1.1, 3.9, 6);	//Dice BlackBackground Rectangle
	drawRectangle(0.5, 1.0, 6);  //View "TURN" or "STOP" Rectangle
	turnORstopRectangle();     //Dice.c



}

//to display Dice Rectangle
void drawDiceRectangle()
{
	GLfloat lineVertices[] =

	{
			10.65f, 1.3f,
			10.65f, 3.3f,
			12.9f, 3.3f,
			12.9f, 1.3f,

	};

	glEnable(GL_LINE_SMOOTH);
	glLineWidth(3);
	glColor3f(1.0, 1.0, 1.0); //White 
	glEnableClientState(GL_VERTEX_ARRAY);  // tell OpenGL that you're using a vertex array 
	glVertexPointer(2, GL_FLOAT, 0, lineVertices);  // line to the vertices to be used
	glDrawArrays(GL_POLYGON, 0, 4);    // draw the vertixes
	glDisableClientState(GL_VERTEX_ARRAY); //tell OpenGL that you're finished using the vertex array
	glDisable(GL_LINE_SMOOTH);
}


//Funtion to turn the Dice
int true = 0;
int timer1 = 1;
int timer2 = 0;
int timer3 = 0;

//turn DICE
void cleckedMouseTurn()
{
	if (onTurnMouse == 1)
	{
		//stop editing the player name
		edit = 0;

		//to restart Dice Timer
		timer2 = 0;

		//Increse PlayerOrder  after the previous player played his turn
		if (true == 0) {
			PlayerOrder++;
			true = 1;
		}

		if (PlayerOrder >= PlayersNumbers + 1)PlayerOrder = 1;

		drawDiceRectangle();

		if (DiceRollerOrder == 1)   	one();
		else if (DiceRollerOrder == 2)  two();
		else if (DiceRollerOrder == 3) there();
		else if (DiceRollerOrder == 4) four();
		else if (DiceRollerOrder == 5) five();
		else if (DiceRollerOrder == 6)  six();

		//to control the dice rotation
		//don't display the next frame until 60 msec pass
		timer1++;
		if (timer1 == 9)
		{
			DiceRollerOrder++;
			timer1 = 1;
		}
		if (DiceRollerOrder == 7) DiceRollerOrder = 1;
		timer3 = 0;


	}
}

//function to Stop Dice
void cleckedMouseStop()
{
	//if the next player don't cleck turn show whose turn now
	if (onTurnMouse == 0 )	nextPlayer(PlayerOrder + 1);

	//check that user cleck on turn button first && after that he cleck stop button
	if (PlayerOrder > 0 && onStopMouse == 1)
	{
		edit = 0;
		true = 0;
		onTurnMouse = 0;
		drawDiceRectangle();

		if (DiceRollerOrder == 1)      one();
		else if (DiceRollerOrder == 2)  two();
		else if (DiceRollerOrder == 3) there();
		else if (DiceRollerOrder == 4) four();
		else if (DiceRollerOrder == 5) five();
		else if (DiceRollerOrder == 6)  six();

		timer2++;
		if (timer2 == 200) {
			edit = 0;
			onStopMouse = 0;
			timer2 = 0;

		}

		TurntoPlay(PlayerOrder, DiceRollerOrder, timer3);
		//timer3 for stop the running screen (saving players postions)
		timer3++;

	}

}


//to display next player turn
void nextPlayer(int player)
{
	if (player > PlayersNumbers) player = 1;
	GLdouble name[50];
	glMatrixMode(GL_PROJECTION);
	GLdouble* matrix = name;
	glGetDoublev(GL_PROJECTION_MATRIX, matrix);
	glLoadIdentity();
	glPushMatrix();
	glLoadIdentity();
	glColor3f(0.850f, 0.031f, 0.031f);//RED fromRBG site

	//Print PlayerName
	glRasterPos2f(0.22f, -0.3f);

	select_colorBlock(8);
	char* s = "Next Turn:";
	for (int i = 0; s[i]; i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s[i]);
	}

	//Print "Player"
	glRasterPos2f(0.4f, -0.3f);
	char* s1 = "Player ";
	for (int i = 0; s1[i]; i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s1[i]);
	}
	//print the player order
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, player);
	glPopMatrix();
	glMatrixMode(GL_PROJECTION);
	glLoadMatrixd(matrix);
	glMatrixMode(GL_MODELVIEW);
}

