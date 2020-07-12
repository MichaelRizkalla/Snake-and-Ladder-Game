#include <SnakeLadder.h>

//select the color of the block as the player color
void select_colorBlock(int color)
{

	if (color == 1)
		glColor3f(0.321f, 0.039f, 0.050f);  //Brown

	else if (color == 2)
		glColor3f(0.298f, 0.007f, 0.352f);  //Purple

	else if (color == 3)
		glColor3f(0.129f, 0.0f, 0.658f); //Blue

	else if (color == 4)
		glColor3f(0.4f, 0.717f, 0.023f);  //Green

	else if (color == 5)
		glColor3f(0.690f, 0.309f, 0.027f); //Orange

	else if (color == 6)
		glColor3f(0.0f, 0.0f, 0.0f); //Black 

	else if (color == 7)
		glColor3f(1.0f, 1.0f, 1.0f); //White 


}
//draw a rectangle to display information
void drawRectangle(double a1, double b1, int color)
{

	GLfloat lineVertices[] =
	{
		10.2f, (GLfloat)a1,
		10.2f, (GLfloat)b1,
		13.4f, (GLfloat)b1,
		13.4f, (GLfloat)a1,

	};

	glEnable(GL_LINE_SMOOTH);
	glLineWidth(3);
	select_colorBlock(color);
	glEnableClientState(GL_VERTEX_ARRAY);  // tell OpenGL that you're using a vertex array 
	glVertexPointer(2, GL_FLOAT, 0, lineVertices);  // line to the vertices to be used
	glDrawArrays(GL_POLYGON, 0, 4);    // draw the vertixes
	glDisableClientState(GL_VERTEX_ARRAY); //tell OpenGL that you're finished using the vertex array
	glDisable(GL_LINE_SMOOTH);
}


//Rectangle to know Number of players
void NumberofPlayer()
{

	drawRectangle(8.6, 9.7, 7);
	GLdouble n[50];
	glMatrixMode(GL_PROJECTION);
	GLdouble* matrix = n;
	glGetDoublev(GL_PROJECTION_MATRIX, matrix);
	glLoadIdentity();
	glPushMatrix();
	glLoadIdentity();
	select_colorBlock(6);
	//Print "Number of Players:"
	glRasterPos2f(0.23f, 0.87f);

	char* ss4 = "Number of Players:";
	for (int i = 0; ss4[i]; i++)
	{

		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, ss4[i]);
	}


	glRasterPos2f(0.22f, 0.76f);

	char* ss5 = "  2  ||   3   ||   4  ||   5";
	for (int i = 0; ss5[i]; i++)
	{

		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, ss5[i]);
	}


	glPopMatrix();
	glMatrixMode(GL_PROJECTION);
	glLoadMatrixd(matrix);
	glMatrixMode(GL_MODELVIEW);


}

//display the player name on the rectangle
void displayPlayerInformation(char playerName[30], int  PlayerOrder, double y)
{

	GLdouble name[50];
	glMatrixMode(GL_PROJECTION);
	GLdouble* matrix = name;
	glGetDoublev(GL_PROJECTION_MATRIX, matrix);
	glLoadIdentity();
	glPushMatrix();
	glLoadIdentity();
	glColor3b((GLbyte)0.0, (GLbyte)0.0, (GLbyte)0.0);   //black color

	//Print "Player"
	glRasterPos2f(0.2f, (GLfloat)y);
	char* s1 = "Player ";
	for (int i = 0; s1[i]; i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s1[i]);
	}
	//print the player order
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, PlayerOrder);

	//print ": "
	char* s3 = ": ";
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s3[0]);
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s3[1]);


	//Print PlayerName
	glRasterPos2f(0.35f, (GLfloat)y);
	char* s = playerName;
	for (int i = 0; s[i]; i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s[i]);
	}

	glPopMatrix();
	glMatrixMode(GL_PROJECTION);
	glLoadMatrixd(matrix);
	glMatrixMode(GL_MODELVIEW);


	
}



//function to display the written char
void displaychar(int c, double y)
{

	GLdouble name1[50];
	glMatrixMode(GL_PROJECTION);
	GLdouble* matrix = name1;
	glGetDoublev(GL_PROJECTION_MATRIX, matrix);
	glLoadIdentity();
	glPushMatrix();
	glLoadIdentity();
	glColor3b((GLbyte)0.0, (GLbyte)0.0, (GLbyte)0.0);   //black color

	glRasterPos2f(0.22f, (float)y);
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, (char)c);

	glMatrixMode(GL_PROJECTION);
	glLoadMatrixd(matrix);
	glMatrixMode(GL_MODELVIEW);

}

//funtion to know the pressed key
int i1 = 0, i2 = 0, i3 = 0, i4 = 0, i5 = 0;
void keyPressed(unsigned char key, int x, int y)
{
	//printf("%d %d\n", x, y);

	if (x >= 830 && x <= 980 && y >= 135 && y <= 185) //player1
		{
			N1[i1] = (char)key;

			displaychar(key, Yy1);
			Yy1 += 0.01;
			i1++;

		}

		else if (x >= 830 && x <= 980 && y >= 200 && y <= 250) //player2
		{
			N2[i2] = (char)key;
			displaychar(key, Yy2);
			Yy2 += 0.01;
			i2++;
		}

		else if (x >= 830 && x <= 980 && y >= 265 && y <= 315) //player3
		{
			N3[i3] = (char)key;
			displaychar(key, Yy3);
			Yy3 += 0.01;
			i3++;
		}

		else if (x >= 830 && x <= 980 && y >= 330 && y <= 380) //player4
		{
			N4[i4] = (char)key;
			displaychar(key, Yy4);
			Yy4 += 0.01;
			i4++;
		}
		else if (x >= 830 && x <= 980 && y >= 395 && y <= 450) //player5
		{
			N5[i5] = (char)key;
			displaychar(key, Yy5);
			Yy5 += 0.01;
			i5++;		
	}
}



//store player information
void storeStruct()
{
	p1.playername = N1;
	p1.color = 1;

	p2.playername = N2;
	p2.color = 2;

	p3.playername = N3;
	p3.color = 3;

	p4.playername = N4;
	p4.color = 4;

	p5.playername = N5;
	p5.color = 5;
}



