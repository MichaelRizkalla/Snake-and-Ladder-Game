#include <SnakeLadder.h>

//function to draw circle
void drawPlayercircle(double xx, double yy, int color)
{
	float theta;
	select_colorBlock(color);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i++)
	{
		theta = i * 3.142f / 180.0f;
		glVertex2f((float)(xx + 0.18f * cos(theta)), (float)(yy + 0.18f * sin(theta)));   //10.5 ,0.4

	}
	glEnd();
}

//function to draw all player circles
void drawAllCircle( int PlayersNumbers1)
{
	if (PlayersNumbers1 == 1)
	{
		drawPlayercircle(player1X, player1Y, p1.color);	//player 1

	}

	if (PlayersNumbers1 == 2)
	{
		drawPlayercircle(player1X, player1Y, p1.color);	//player 1
		drawPlayercircle(player2X, player2Y, p2.color);	//player 2

	}

	if (PlayersNumbers1 == 3)
	{
		drawPlayercircle(player1X, player1Y, p1.color);	//player 1
		drawPlayercircle(player2X, player2Y, p2.color);	//player 2
		drawPlayercircle(player3X, player3Y, p3.color);//player 3

	}

	if (PlayersNumbers1 == 4)
	{
		drawPlayercircle(player1X, player1Y, p1.color);	//player 1
		drawPlayercircle(player2X, player2Y, p2.color);	//player 2
		drawPlayercircle(player3X, player3Y, p3.color);//player 3
		drawPlayercircle(player4X, player4Y, p4.color); //player 4

	}

	else if (PlayersNumbers1 == 5)
	{
		drawPlayercircle(player1X, player1Y, p1.color);	//player 1
		drawPlayercircle(player2X, player2Y, p2.color);	//player 2
		drawPlayercircle(player3X, player3Y, p3.color);//player 3
		drawPlayercircle(player4X, player4Y, p4.color); //player 4
		drawPlayercircle(player5X, player5Y, p5.color);//player 5

	}

}



//function to move the players marks
static int winnertimer = 0;
void TurntoPlay(int Player_Order, int steps, int timer3)
{
	//to diplay winner information and start a new game 
	if (winner > 0 && start == 0)
	{
		drawWinnerRectangle();
		display(winner);
		winnertimer++;
		//after 0.5 sec from displaying Winner close the Window
		if(winnertimer==190)	glutLeaveMainLoop();
	}

	//timer3 for stop the running screen (saving players postions)
	if (timer3 == 0)
	{
		if (Player_Order == 1)
		{
			visted[s1] --;

			s1 += steps;

			//if there is ladder in this point
			s1 = if_Ladders(s1);

			//if there is snake in this point
			s1 = if_Snakes(s1);

			if (s1 >= 100) //WINEER
			{
				s1 = 0;
				//end game
				winner = 1;
				//start new game
				start = 0;
			}


			//if there is some mark in this point

			if (visted[s1] == 1 || visted[s1] == 0)
			{
				player1X = arrX[s1];

				if (visted[s1] == 1) player1Y = arrY[s1] + 0.62;
				else if (visted[s1] == 0)  player1Y = arrY[s1];

			}
			else if (visted[s1] == 4)
			{
				player1X = arrX[s1] - 0.29;
				player1Y = arrY[s1] + 0.62;
			}
			else if (visted[s1] == 3 || visted[s1] == 2)
			{
				player1Y = arrY[s1];

				if (visted[s1] == 2) player1X = arrX[s1] - 0.29;
				else if (visted[s1] == 3)  player1X = arrX[s1] + 0.29;
			}
			visted[s1] ++;

		}

		if (Player_Order == 2)
		{
			visted[s2]--;
			s2 += steps;
			//if there is ladder in this point
			s2 = if_Ladders(s2);

			//if there is snake in this pint
			s2 = if_Snakes(s2);

			if (s2 >= 100) //WINEER
			{
				s2 = 0;
				//end game
				winner = 2;
				//start new game
				start = 0;

			}

			//if there is more than on mark in this place
			if (visted[s2] == 1 || visted[s2] == 0)
			{
				player2X = arrX[s2];
				if (visted[s2] == 1) player2Y = arrY[s2] + 0.62;
				else if (visted[s2] == 0)  player2Y = arrY[s2];

			}
			else if (visted[s2] == 4)
			{
				player2X = arrX[s2] - 0.29;
				player2Y = arrY[s2] + 0.62;
			}
			else if (visted[s2] == 3 || visted[s2] == 2)
			{
				player2Y = arrY[s2];

				if (visted[s2] == 2) player2X = arrX[s2] - 0.29;
				else if (visted[s2] == 3)  player2X = arrX[s2] + 0.29;
			}
			visted[s2] ++;

		}

		if (Player_Order == 3)
		{
			visted[s3]--;
			s3 += steps;
			//if there is ladder in this point
			s3 = if_Ladders(s3);

			//if there is snake in this pint
			s3 = if_Snakes(s3);

			if (s3 >= 100) //WINEER
			{
				s3 = 0;
				//end game
				winner = 3;
				//start new game
				start = 0;
				drawWinnerRectangle(2);

			}

			//if there is some mark in this point
			if (visted[s3] == 1 || visted[s3] == 0)
			{
				player3X = arrX[s3];

				if (visted[s3] == 1) player3Y = arrY[s3] + 0.62;
				else if (visted[s3] == 0)  player3Y = arrY[s3];
			}
			else if (visted[s3] == 4)
			{
				player3X = arrX[s3] - 0.29;
				player3Y = arrY[s3] + 0.62;
			}
			else if (visted[s3] == 3 || visted[s3] == 2)
			{
				player3Y = arrY[s3];

				if (visted[s3] == 2) player3X = arrX[s3] - 0.29;
				else if (visted[s3] == 3)  player3X = arrX[s3] + 0.29;
			}
			visted[s3] ++;

		}

		if (Player_Order == 4)
		{
			visted[s4]--;
			s4 += steps;
			//if there is ladder in this point
			s4 = if_Ladders(s4);

			//if there is snake in this pint
			s4 = if_Snakes(s4);

			if (s4 >= 100) //WINEER
			{
				s4 = 0;
				//end game
				winner = 4;
				//start new game
				start = 0;
				drawWinnerRectangle(4);

			}

			//if there is some mark in this point
			if (visted[s4] == 1 || visted[s4] == 0)
			{
				player4X = arrX[s4];

				if (visted[s4] == 1) player4Y = arrY[s4] + 0.62;
				else if (visted[s4] == 0)  player4Y = arrY[s4];
			}
			else if (visted[s4] == 4)
			{
				player4X = arrX[s4] - 0.29;
				player4Y = arrY[s4] + 0.62;
			}

			else if (visted[s4] == 3 || visted[s4] == 2)
			{
				player4Y = arrY[s4];

				if (visted[s4] == 2) player4X = arrX[s4] - 0.29;
				else if (visted[s4] == 3)  player4X = arrX[s4] + 0.29;
			}
			visted[s4] ++;

		}

		if (Player_Order == 5)
		{
			visted[s5]--;
			s5 += steps;
			//if there is ladder in this point
			s5 = if_Ladders(s5);

			//if there is snake in this pint
			s5 = if_Snakes(s5);

			if (s5 >= 100) //WINEER
			{
				s5 = 0;
				//end game
				winner = 5;
				//start new game
				start = 0;
				drawWinnerRectangle(5);

			}

			//if there is some mark in this point
			if (visted[s5] == 1 || visted[s5] == 0)
			{
				player5X = arrX[s5];

				if (visted[s5] == 1) player5Y = arrY[s5] + 0.62;
				else if (visted[s5] == 0)  player5Y = arrY[s5];
			}
			else if (visted[s5] == 4)
			{
				player5X = arrX[s5] - 0.29;
				player5Y = arrY[s5] + 0.62;
			}
			else if (visted[s5] == 3 || visted[s5] == 2)
			{
				player4Y = arrY[s5];

				if (visted[s5] == 2) player5X = arrX[s5] - 0.29;
				else if (visted[s5] == 3)  player5X = arrX[s5] + 0.29;
			}
			visted[s5] ++;

		}

	}
}


//ladder jump
int if_Ladders(int l)
{
	if (l == 1) l = 22;
	else if (l == 4) l = 36;
	else if (l == 12) l = 54;
	else if (l == 38) l = 88;
	else if (l == 59) l = 80;
	else if (l == 72) l = 91;
	else if (l == 78) l = 99;
	return (l);

}

//snake down
int if_Snakes(int s)
{
	if (s == 28) s = 6;
	else if (s == 44) s = 18;
	else if (s == 60) s = 40;
	else if (s == 68) s = 31;
	else if (s == 85) s = 25;
	else if (s == 93) s = 69;
	else if (s == 98) s = 58;
	return (s);


}

