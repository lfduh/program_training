#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main()
{

	double rectx1[11], recty1[11], rectx2[11], recty2[11];
	double pointx[10000], pointy[10000];
	double centerx[10000], centery[10000], radius[10000];
	char type[10000];
	int rectanglecount = 0;
	int pointcount = 0;
	
	bool getflag = false;

	while (1)
	{
		cin >> type[rectanglecount];

		if (type[rectanglecount] == '*')
		{
			break;
		}
		else if (type[rectanglecount] == 'r')
		{
			cin >> rectx1[rectanglecount] >> recty1[rectanglecount] >> rectx2[rectanglecount] >> recty2[rectanglecount];

			rectanglecount++;
		}

		else if (type[rectanglecount] == 'c')
		{
			cin >> rectx1[rectanglecount] >> recty1[rectanglecount] >> rectx2[rectanglecount];

			rectanglecount++;
		}



	}


	while (1)
	{
		cin >> pointx[pointcount] >> pointy[pointcount];

		if (pointx[pointcount] == 9999.9 &&  pointy[pointcount] == 9999.9)
		{
			break;
		}
		pointcount++;

	}


	for (int x = 0; x < pointcount; x++)
	{
		getflag = false;

		for (int y = 0; y < rectanglecount; y++)
		{
			if (type[y] == 'r')
			{
				if (pointx[x] > rectx1[y] && pointx[x] < rectx2[y])
				{
					if (pointy[x] < recty1[y] && pointy[x] > recty2[y])
					{
						cout << "Point " << x + 1 << " is contained in figure " << y + 1 << endl;
						getflag = true;
					}
				}
			}
			else if (type[y] == 'c')
			{
				if (  sqrt(pow((pointx[x] - rectx1[y]),2) + pow((pointy[x] - recty1[y]),2)) < rectx2[y])
				{
					cout << "Point " << x + 1 << " is contained in figure " << y + 1 << endl;
					getflag = true;

				}

			}
						
		}
		if (!getflag)
		{
			cout << "Point " << x + 1 << " is not contained in any figure" << endl;

		}
	}

	//system("pause");
}

