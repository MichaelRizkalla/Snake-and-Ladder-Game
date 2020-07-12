#include <SnakeLadder.h>

//draw a rectangle to display the Winner 
void drawWinnerRectangle()
{
	
	select_colorBlock(7);

	GLfloat lineVertices[] =
	{
		4,  4,
		3, 5.5,
		4, 7,
		6,7,
		7, 5.5,
		6, 4

	};

	glEnable(GL_LINE_SMOOTH);
	glLineWidth(3);

	glEnableClientState(GL_VERTEX_ARRAY);  // tell OpenGL that you're using a vertex array 
	glVertexPointer(2, GL_FLOAT, 0, lineVertices);  // line to the vertices to be used
	glDrawArrays(GL_POLYGON, 0, 6);    // draw the vertixes
	glDisableClientState(GL_VERTEX_ARRAY); //tell OpenGL that you're finished using the vertex array
	glDisable(GL_LINE_SMOOTH);
}


//display Winner Information 
void display(int s)
{
	select_colorBlock(s);
	GLdouble n[50];
	glMatrixMode(GL_PROJECTION);
	GLdouble* matrix = n;
	glGetDoublev(GL_PROJECTION_MATRIX, matrix);
	glLoadIdentity();
	glPushMatrix();
	glLoadIdentity();
	//Print "Number of Players:"
	glRasterPos2f(-0.5f, 0.17f);

	char* a1 = "WINNER:^-^";
	for (int i = 0; a1[i]; i++)
	{

		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,a1[i]);
	}


	glRasterPos2f(-0.5,0.0);

	if (s == 1)
	{
		char* a2 =p1.playername;
		for (int i = 0; a2[i]; i++)
		{

			glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, a2[i]);
		}
	}


	if (s == 2)
	{
		char* a3 = p2.playername;
		for (int i = 0; a3[i]; i++)
		{

			glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, a3[i]);
		}
	}



	if (s == 3)
	{
		char* a4 = p3.playername;
		for (int i = 0; a4[i]; i++)
		{

			glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, a4[i]);
		}
	}

	if (s == 4)
	{
		char* a5 = p4.playername;
		for (int i = 0; a5[i]; i++)
		{

			glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, a5[i]);
		}
	}

	if (s == 5)
	{
		char* a6 = p5.playername;
		for (int i = 0; a6[i]; i++)
		{

			glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, a6[i]);
		}
	}
	glPopMatrix();
	glMatrixMode(GL_PROJECTION);
	glLoadMatrixd(matrix);
	glMatrixMode(GL_MODELVIEW);
}