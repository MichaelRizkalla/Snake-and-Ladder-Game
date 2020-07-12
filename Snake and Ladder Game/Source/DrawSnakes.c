#include <SnakeLadder.h>
int a= 0;

void select_colorSankes()
{
        if (a == 3) a = 0;
        if (a == 0)
            glColor3f(0.243f, 0.227f, 0.078f); //DarkGreen
        else if (a == 1)
            glColor3f(0.0f, 0.0f, 0.0f);   //Black   
        a++;
    

}

//draw Snakes Point
void drawPoint(double a, double b)
{
    GLfloat pointVertex[] = { (float)a, (float)b };
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
    float x = 1.8f, y = 0.0f, i = 0.0f;
    for (i = 0; x + i < 4.2f; i += 0.1f)
    {
        y = (float)((x + i) + sin(((double)x + i)));
        drawPoint((double)y, (double)x + i);
    }

}

void Snake2()
{
    float x = 3.8f, y = 0.0f;
    for (float i = 0; x + i < 6.2f; i += 0.1f)
    {
        y = 8.4f + (float)cos((double)x + i + 2.9);
        drawPoint((double)y + 0.1, (double)x + i);
    }
}

void Snake3()
{
    float x = 2.7f, y = 0.0f;
    for (float i = 0.0f; x + i < 8.44f; i += 0.07f)
    {
        y = 4.82f + (float)cos(((double)x + i) * 1.7);
        drawPoint((double)y, (double)x + i);
    }
}

void Snake4()
{
    float x = 3.7f, y = 0.0f;
    for (float i = 0.0f; x + i < 5.24f; i += 0.1f)
    {
        y = (float)(i - 0.2f) + (float)sin(((double)x + i) * 2);
        drawPoint((double)y, (double)x + i);
    }
}

void Snake5()
{
    float x = 5.8f, y = 0.0f;
    for (float i = 0.0f; x + i < 9.3f; i += 0.09f)
    {
        y = 1.9f + (float)sin(((double)x + i) * 2.3);
        drawPoint((double)y, (double)x + i);
    }
}

void Snake6()
{
    float x = 5.9f, y = 0.0f;
    for (float i = 0.0f; x + i < 7.72f; i += 0.1f)
    {
        y = (float)(1.4 + i + sin(((double)x + i) * 0.7));
        drawPoint((double)x + i - 0.2, y - 0.1);
    }
}

void Snake7()
{
    float x = 5.2f, y = 0.0f;
    for (float i = 0; x + i < 8.2f; i += 0.1f)
    {
        y = 8.2f + (float)cos(x + i * 1.3);
        drawPoint((double)y, ((double)x + i + 1.1));
    }
}
