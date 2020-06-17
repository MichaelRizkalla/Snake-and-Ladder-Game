#include"Header.h"
// function to initialize dimenstion of a grid 
int gridX = 0, gridY = 0;
static int a = 0;

void initGrid(int x, int y)
{
	gridX = x;
	gridY = y;
	//initiallize the grid coordinate dimensions to init() in BulidFunctions.c
}


//function to draw a single unit (block) of the Grid
void unit(int x,int y)
{
	//set width of each line
	glLineWidth(5.0);

	//specify a mode of drawing
	glBegin(GL_QUADS); //connect the first vertex with last vertex so close figure will be formed

		//draw lines of the unot
		glVertex2f(x, y);
		glVertex2f(x, y + 1);
		glVertex2f(x + 1, y + 1);
		glVertex2f(x + 1, y); 

	//end drwaing this unit
	glEnd();

	
}

//function to Draw the Grid
void drawGrid() 
{
	//the way that the color of each  unit display is only done while trying by me ^-^
	for (int i = 0; i <10; i++)
	{
		select_color();

		for (int j = 0; j < 10; j++)
		{
			select_color();
			unit(i, j);
			select_color();
			
		}
	}
}


//set color of each unit
void select_color()
{
	if (a == 5)a = 0;
	if(a==0)
	glColor3f(1.0, 1.0, 1.0); //White 
	else if(a==1)
	glColor3f(0.850, 0.031, 0.031);//RED fromRBG site
	else if(a==2)
	glColor3f(0.274, 0.556, 0.243);  //Green
	else if(a==3)
	glColor3f(0.929, 0.937, 0.203); //yellow
	else if(a==4)
	glColor3f(0.333, 0.407, 0.866);  //Blue
	a++;
}


//Function from A-Z done BY me ^-^ (even the coordinates of numbers by trying [-1,1])
//function to print the numbers on the GRID (Number of each unit)
void drawNumbers()
{
	int array[100];
	glMatrixMode(GL_PROJECTION);
	double* matrix = array;
	glGetDoublev(GL_PROJECTION_MATRIX, matrix);
	glLoadIdentity();
	glPushMatrix();
	glLoadIdentity();
	glColor3b(0.0, 0.0, 0.0);   //black color

	//Print "Start"
	glRasterPos2f(-1.0, -0.99);
	char* ss = "START";  
	for (int i = 0; ss[i]; i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, ss[i]);
	}

	//Print row 1
	glRasterPos2f(-1.0, -0.92);
	char* s1 = "     1          2          3          4          5          6          7          8          9         10";        
	for (int i = 0; s1[i]; i++) 
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s1[i]);   
	}

	//Print row 2
	glRasterPos2f(-1.0, -0.72);
	char* s2 = "    20        19        18        17        16        15        14        13        12        11";
	for (int i = 0; s2[i]; i++) 
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s2[i]);  
	}

	//Print row 3
	glRasterPos2f(-1.0, -0.52);
	char* s3 = "    21        22        23        24        25        26        27        28        29        30";
	for (int i = 0; s3[i]; i++) {

	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s3[i]);  
	}

	//Print row 4
	glRasterPos2f(-1.0, -0.32);
	char* s4 = "    40        39        38        37        36        35        34        33        32        31";
	for (int i = 0; s4[i]; i++) 
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s4[i]);   
	}

	//Print row 5
	glRasterPos2f(-1.0, -0.12);
	char* s5 = "    41        42        43        44        45        46        47        48        49        50";
	for (int i = 0; s5[i]; i++) 
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s5[i]);   
	}

	//Print row 6
	glRasterPos2f(-1.0, 0.08);
	char* s6 = "    60        59        58        57        56        55        54        53        52        51";
	for (int i = 0; s6[i]; i++) 
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s6[i]);   
	}

	//Print row 7
	glRasterPos2f(-1.0, 0.28);
	char* s7 = "    61        62        63        64        65        66        67        68        69        70";
	for (int i = 0; s7[i]; i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s7[i]);   
	}

	//Print row 8
	glRasterPos2f(-1.0, 0.48);
	char* s8 = "    80        79        78        77        76        75        74        73        72        71";
	for (int i = 0; s8[i]; i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s8[i]);
	}

	//Print row 9
	glRasterPos2f(-1.0, 0.68);
	char* s9 = "    81        82        83        84        85        86        87        88        89        90";
	for (int i = 0; s9[i]; i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s9[i]);
	}

	//Print row 10
	glRasterPos2f(-1.0, 0.88);
	char* s10 = "   100       99        98        97        96        95        94        93        92        91";
	for (int i = 0; s10[i]; i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s10[i]);
	}

	//Print "Finish"
	glRasterPos2f(-1.0, 0.95);
	char* s = " Finish";
	for (int i = 0; s[i]; i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, s[i]);
	}
	glPopMatrix();
	glMatrixMode(GL_PROJECTION);
	glLoadMatrixd(matrix);
	glMatrixMode(GL_MODELVIEW);

}
