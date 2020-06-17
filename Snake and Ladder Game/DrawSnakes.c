#include"Header.h"
int a= 0;

void select_colorSankes()
{
        if (a == 3)a = 0;
        if (a == 0)
            glColor3f(0.243, 0.227, 0.078); //DarkGreen
        else if (a == 1)
            glColor3f(0.0, 0.0, 0.0);   //Black   
        a++;
    

}

//draw Snakes Point
void drawPoint(double a, double b)
{
    GLfloat pointVertex[] = { a,b };
    glEnable(GL_POINT_SMOOTH);

    glEnableClientState(GL_VERTEX_ARRAY); // tell OpenGL that you're using a vertex array 
    glPointSize(15);
    select_colorSankes();

    glVertexPointer(2, GL_FLOAT, 0, pointVertex); // point to the vertices to be used
    glDrawArrays(GL_POINTS, 0, 1); // draw the vertixes
    glDisableClientState(GL_VERTEX_ARRAY); // tell OpenGL that you're finished using the vertex array
 
    glDisable(GL_POINT_SMOOTH); // stop the smoothing to make the points circular
}

//draw Snake
void drawSnakes()
{
    Snake1();
    Snake2();
    Snake3();
    Snake4();
    Snake5();
    Snake6();
    Snake7();

}

void Snake1()
{
    float x =1.8 , y =0,i=0 ;
    for ( i = 0; x+i<4.2; i += 0.1)
    {
        y = (x+i)+sin((x + i));
        drawPoint(y,x+i);
    }

}

void Snake2()
{
    float x = 3.8, y = 0;
    for (float i = 0; x + i <6.2; i += 0.1)
    {
        y = 8.4+cos(x+i+ 2.9);
        drawPoint(y+0.1,x+i);
    }
}

void Snake3()
{
  float x =2.7, y = 0;
  for (float i = 0; x + i < 8.44; i += 0.07)
    {
        y = 4.82+ cos((x+i)*1.7);
        drawPoint(y,x+i);
    }
}

void Snake4()
{
    float x = 3.7, y = 0;
    for (float i = 0; x + i < 5.24; i += 0.1)
    {
        y = (i-0.2) + sin((x + i)*2);
        drawPoint(y,x + i);
    }
}

void Snake5()
{
    float x = 5.8, y = 0;
    for (float i = 0; x + i < 9.3; i += 0.09)
    {
        y =1.9+ sin((x + i)*2.3);
        drawPoint(y,x+i);
    }
}

void Snake6()
{
    float x = 5.9, y = 0;
    for (float i = 0; x + i < 7.72; i += 0.1)
    {
        y = 1.4+i+sin((x + i)*0.7);
        drawPoint(x + i-0.2,y-0.1);
    }
}

void Snake7()
{
    float x = 5.2, y = 0;
    for (float i = 0; x + i < 8.2; i += 0.1)
    {
        y = 8.2 + cos(x + i * 1.3);
        drawPoint(y,x+i+1.1);
    }
}
