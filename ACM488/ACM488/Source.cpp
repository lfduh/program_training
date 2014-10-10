#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int datacount = 0;
	int amplitude;
	int frequency;

	cin >> datacount;

	for (int i=1; i <= datacount; i++)
	{
		cin >> amplitude;
		cin >> frequency;

		for (int j=1; j <= frequency; j++)
		{
			for (int k =1; k <= amplitude; k++)
			{
				for (int l = 1; l <=k; l++)
				{
					cout << k;
				}
					cout << endl;
			}

			for (int k = amplitude- 1 ; k > 0; k--)
			{
				for (int l = k; l > 0; l--)
				{
					cout << k;
				}
					cout << endl;
			}

			if (!( j == frequency && i == datacount))
			{
				cout << endl;
			}
			
		}
		//cout << endl;
		
	}
		
	system("pause");
	return 0;
}