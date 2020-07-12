#include <SnakeLadder.h>

//to dispaly "TURN"or "STOP"
void turnORstopRectangle()
{
	glColor3f(1.0, 1.0, 1.0); //White 
	//display "TURN"
	GLdouble n[50];
	glMatrixMode(GL_PROJECTION);
	GLdouble* matrix = n;
	glGetDoublev(GL_PROJECTION_MATRIX, matrix);
	glLoadIdentity();
	glPushMatrix();
	glLoadIdentity();
	glRasterPos2f(0.23f, -0.87f);

	//Print "DICE or Stop"
	char* ss3 = " DICE    ||   STOP";
	for (int i = 0; ss3[i]; i++)
	{

		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, ss3[i]);
	}

	glPopMatrix();
	glMatrixMode(GL_PROJECTION);
	glLoadMatrixd(matrix);
	glMatrixMode(GL_MODELVIEW);

}



//to draw point on Dice
void dicePoint(double a, double b)
{

	glColor3f(0.0, 0.0, 0.0);   //Black   
	GLfloat pointVertex[] = { (GLfloat)a, (GLfloat)b };
	glEnable(GL_POINT_SMOOTH);

	glEnableClientState(GL_VERTEX_ARRAY); // tell OpenGL that you're using a vertex array 
	glPointSize(30);

	glVertexPointer(2, GL_FLOAT, 0, pointVertex); // point to the vertices to be used
	glDrawArrays(GL_POINTS, 0, 1); // draw the vertixes
	glDisableClientState(GL_VERTEX_ARRAY); // tell OpenGL that you're finished using the vertex array

	glDisable(GL_POINT_SMOOTH); // stop the smoothing to make the points circular
}

//one point in Dice
void one()
{
	//draw point
	dicePoint(11.8, 2.28);

}

//two points in Dice
void two()
{

	//draw points
	dicePoint(11.26, 1.76);
	dicePoint(12.29, 2.82);


}

//there point sin Dice

void there()
{
	//draw points
	dicePoint(11.26, 1.76);

	dicePoint(11.8, 2.28);

	dicePoint(12.29, 2.82);


}


//four points in Dice

void four()
{
	//draw points
	dicePoint(11.26, 1.76);
	dicePoint(11.26, 2.82);

	dicePoint(12.29, 2.82);
	dicePoint(12.29, 1.76);


}

void five()
{
	//draw points
	dicePoint(11.26, 1.76);
	dicePoint(11.26, 2.82);

	dicePoint(11.8, 2.28);

	dicePoint(12.29, 2.82);
	dicePoint(12.29, 1.76);

}

void six()
{

	drawDiceRectangle();

	//draw points
	dicePoint(11.26, 1.76);
	dicePoint(11.26, 2.28);
	dicePoint(11.26, 2.82);

	dicePoint(12.29, 2.82);
	dicePoint(12.26, 2.28);
	dicePoint(12.29, 1.76);

}




