#include <iostream>
#include <cstring>

using namespace std;

int price[5] = { 50, 25, 10, 5, 1 };
long long int c[100000];

int cent;
void change(int);

int main()
{
	while (cin >> cent)
	{
		change(cent);
	}


	//system("pause");
	return 0;
}


void change(int m)
{
	memset(c, 0, sizeof(c));
	c[0] = 1;

	for (int i = 0; i < 5; i++)
	{
		for (int j = price[i]; j <= m; j++)
		{
			c[j] += c[ j - price[i]];
		}
		
	}
	if (c[m] == 1)
	{
		cout << "There is only 1 way to produce " << m << " cents change." << endl;
	}
	else
	{
		cout << "There are " << c[m] << " ways to produce " << m << " cents change." << endl;
	}
	
	

}