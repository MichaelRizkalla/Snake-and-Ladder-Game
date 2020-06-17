#include"Header.h"

// function to processng of Buliding GameWindow will be done
int argc;
char** argv;

void BulidWindowGame()
{
	//need to be called before start using any of the glut libaries
	
	glutInit(&argc,argv);  // initialize GLUT

	//initialize the display mode which will be using in this OpenGL
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
	//RGB color system mode will be using

	/*Double Buffered windows :at one time there are two display buffers are working
	 while one of them display in screen the other began drawn and
	 when the next frame is displayed
	 the one being drawn is now displayed (animation)*/
	/*Single Buffered is the same frame is been drawn ->erased->drawn */


	//display window in screen (Game Screen)
	//initializes the postion of the window (don't set ->will be randomly on screen)optional
	glutInitWindowPosition(270, 30);


	//initializes the size of the window 
	glutInitWindowSize(1000, 750);

	//create the game window with toolbar name Snake & Ladders Game
	glutCreateWindow("Snake & Ladder Game");


	//register display callback
	glutDisplayFunc(display_callback);
	glutIdleFunc(display_callback);


	//mouse click
	glutMouseFunc(mouseClicks);  //MouseInput.c
	glutKeyboardFunc(keyPressed); //PlayerBlocks.c

	
	/*after the windows created and after maximized,minimized or resized or moved around the screen
	  take argument if the width and height of the new created of the new window*/
	glutReshapeFunc(reshape_callback);

	//change the window color
	init();

	//all processing of the routines can't start until this function
	glutMainLoop();



}

// function to called whenever the window needs to be redrawn or the need stuf to be displayed on it
void display_callback()
{
	//to clear the color buffer each time frame is displayed
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();

	//the grid must be drawn after the color buffer is cleared and before the buffers are swept
	drawGrid();  //DrawsGrid.c Functions

	//to display the numbers on the grid
	drawNumbers();//DrawsGrid.c Functions

	//to draw ladders
	 drawLadders(); //DrawLadders.c Functions

	 //to draw Snakes
	 drawSnakes(); //DrawSnakes.c Function()

	 //to display Players Information
	 drawBlocksCircles(); //MouseInput.c		 

	 //if the user cleck rotate DiceRoller
	 cleckedMouseTurn(); //MouseInput.c

	 //to stop rotating DiceRoller
	 cleckedMouseStop(); //MouseInput.c

	//to swap the Buffers (GlUT_DOUBLE)   glFlush (GlUT_SINGLE);
	glutSwapBuffers();	

}

//VIEWPORT:is the area in which the objects we draw wiil be drawn
// function to viewport the projection of thw game window after  maximized,minimized or resized or moved around the screen
void reshape_callback(int width ,int height)
{
	//function set the viewport of the window  (x,y,width ,height)
	glViewport(10, 10, 1230, 730);  // (GLsizei) casting //Full Screen

	/*modelview matrix :used for models and objects and stuff 
	so to set the projection need to go change the matrix mode to the projection matrix
	*/
	glMatrixMode(GL_PROJECTION); //change from MatrixMode(0,40) to projection matrix

	/*function to make sure that there are no changes yet made to the matrix so all changes will be set as they
	but default at the start no change  will start from very beginning*/
	glLoadIdentity();

	//set OrthoProjection find of PROJECTIONS
	glOrtho(0.0,17.0,0.0,10.0,-1.0,1.0);  //negtive value (z) ==coming out of screen  //postive value (z) ==coming in of screen  //2D

	//swtich to GL_MODELVIEW because the rest of the activites will make part in the moduleview matrix
	glMatrixMode(GL_MODELVIEW); //change from MatrixMode(0,40) to projection matrix

}

// function to change the window color and set the clear color of the window
void init()
{
	//background colour
	glClearColor(0.019, 0.098, 0.054, 1.0);

	
	/* by default the color is black and the RGB values is 0,0,0 and Alpa values is 1.0
	glClearColor(1.0,1.0,1.0,1.0); 1.0 for WHITE
	glClearColor(0.0,0.0,0.0,1.0); 0.0 for BLACK
	only color between [0.0 , 1.0]
	*/

	
	//initiallize the grid coordinate dimensions
	initGrid(100, 100);  //Draw.c Function

}
