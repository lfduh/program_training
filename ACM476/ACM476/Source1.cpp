#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{

	double rectx1[11], recty1[11], rectx2[11], recty2[11];
	double pointx[10000], pointy[10000];
	char type;
	int rectanglecount = 0;
	int pointcount = 0;
	bool getflag = false;

	while (1)
	{
		cin >> type ;

		if (type == '*')
		{
			break;
		}

		cin >> rectx1[rectanglecount] >> recty1[rectanglecount] >> rectx2[rectanglecount] >> recty2[rectanglecount];
		
		rectanglecount++;
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
			
			if (pointx[x] > rectx1[y] && pointx[x] < rectx2[y])
			{
				if (pointy[x] < recty1[y] && pointy[x] > recty2[y])
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

