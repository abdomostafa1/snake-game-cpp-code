#include<iostream> 
#include <ctime>
#include <conio.h>
using namespace std;
int width = 55, height = 15,x=1,y=1,counter=0;
int s[55] = { -1}, ss[55] = { -1 };
bool t = true;
static int yy, xx;
void start()
{
	x = width / 2;
	y = height / 2;
	time_t* p = NULL;
	srand(static_cast<int>(time(p)));
	int fruitx = rand() % width;
	int fruity = rand() % height;
here:
	for (int i = -1; i <= height; i++)
	{
		for (int j= -1; j <= width; j++)
		{
			if (i == -1 || i == height)
			{
				for (int i = -1; i <= width; i++)
				{
					cout << "#";
				}
				break;
			}
			else
			{
				if (counter) {
					for (int k = 0; k < counter; k++)
					{
						if (j == s[k] && i == ss[k])
							cout << "o";
					}
				}
				if (j == -1 || j == width)
					cout << "#";

				else if (x == j && y == i)
				{
					cout << "O";
				}
				else if (fruitx == j && fruity == i)
					cout << "F";
				else
					cout << " ";
			}
		}
		cout << endl;
	}
	string dir;
	int u = 1;
	xx = x;
	yy = y;
	int ult, ultt;
	while (u--)
	{
		if (_kbhit)
		{
			char r = _getch();
			if (r == 'w')
				dir = "up";
			else if (r == 'd')
				dir = "right";
			else if (r == 'a')
				dir = "left";
			else if (r == 's')
				dir = "down";
			else  
				;
			
			if (dir == "right")
				x++;
			else if (dir == "left")
				x--;
			else if (dir == "up")
				y--;
			else if (dir == "down")
				y++;
			else
				t = false;
				
		}
		}
	if (x == width || x == -1 || y == height || y == -1)
		return ;
	if (fruitx == x && fruity == y)
	{
		counter++;
	}
	if (t == true)
	{
		ult = s[0];
		ultt = ss[0];
		s[0] = xx;
		ss[0] = yy;
		xx = ult;
		yy = ultt;
	}
	
	for (int i = 1; t==true&&i < counter; i++)
	{
		
		s[i] = xx;
		ss[i] = yy;
		xx = s[i];
		yy = ss[i];
	}
	goto here;
}
int main(void)
{
	start();
	return 0;
}
