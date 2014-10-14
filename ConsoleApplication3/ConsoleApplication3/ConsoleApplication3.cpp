// ConsoleApplication3.cpp : 定義主控台應用程式的進入點。
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int findlength(int n)
{
	int length = 1;
	while (n != 1)
	{

		if (n % 2 == 1)
		{
			n = 3 * n + 1;
		}
		else
		{
			n /= 2;
		}
		length++;
	}

	return length;

}

int findmaxlength(int min, int max)
{
	int maxlength = 0;
	for (int n = min; n <= max; n++)
	{


		if (findlength(n) > maxlength)
		{
			maxlength = findlength(n);
		}
	}

	return maxlength;
}

int main()
{
	int i, j, t;


	while (cin >> i >> j)
	{
		if (i > j)
		{
			
			cout << i << " " << j << " " << findmaxlength(j, i) << endl;
		}
		else
		{
			cout << i << " " << j << " " << findmaxlength(i, j) << endl;
		}
		
	}
	return 0;
}

