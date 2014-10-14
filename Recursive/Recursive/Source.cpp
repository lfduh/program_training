#include <iostream>

using namespace std;

int input;
int recursive(int);


int main()
{

#pragma region Test
	cin >> input;
	cout << recursive(input);
#pragma endregion 


	system("pause");
	return 0;
}

int recursive(int n)
{
	if ( n == 1)
	{
		return 1;
	}
	else
	{
		return n +recursive(n - 1);
	}
}