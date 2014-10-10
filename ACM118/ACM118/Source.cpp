#include <iostream>
#include <stdio.h>

using namespace std;

int worldx = 0, worldy = 0,robotx = 0,roboty = 0;
enum dir{ N, E, S, W };
char instruction;


int main()
{
	cin >> worldx >> worldy;
	cin >> robotx >> roboty >> dir;
	//N = 0 = 360, S = 180, E = 90 , W = 270
	//cin >> instruction;
	while (cin >> instruction)
	{
		if (instruction == 'E')
		{
			break;
		}
		switch (instruction)
		{
			case 'L':
				dir = dir - 90;
				dir = dir <= 0 ? dir + 360 : dir;
				break;
			case 'R':
				dir = dir + 90;
				dir = dir >= 360 ? dir - 360 : dir;
				break;

			case 'F':
				switch (dir)
				{
				case '0':
					roboty += 1;
					break;

				case '90':
					robotx += 1;
					break;

				case '180':
					roboty -= 1;
					break;

				case '270':
					robotx -= 1;
					break;
				default:;

				}
				break;
			default:;
		}
		
	}

	cout << robotx << " " << roboty << " " << dir;
	if (robotx > worldx || robotx < 0 || roboty > worldy || roboty < 0)
	{
		cout << "Lost";
	}
	
	

	system("pause");
	return 0;

}



