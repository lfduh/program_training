#include <iostream>
#include <stdlib.h>

using namespace std;


int findlength(int n);
int findmaxlength(int min, int max);

int main()
{
	int i;
	int j;
	while (cin >> i >> j)
	{
		cout << i << " " << j << " " << findmaxlength(i, j);
	}


	system("pause");
	return 0;
}

int findmaxlength(int min, int max)
{
	int maxlength = 0;
	for (int n = min; n <= max; n++)
	{

		//findlength(n);
		if (findlength(n) > maxlength)
		{
			maxlength = findlength(n);
		}
	}

	return maxlength;
}

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