#include <iostream>

using namespace std;

int main()
{
	int number = 0 ;


	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			number = i * j;
			if (number < 10)
			{
				cout << " ";
			}
			cout << number << " ";
			if (j == 9)
			{
				cout << endl;
			}
		}

	}


	system("pause");


	return 0;
}