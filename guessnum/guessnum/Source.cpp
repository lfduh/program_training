#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int answer = (rand() % 100) + 1;
	int input = 0;

	while (cin >> input)
	{
		if (input == answer)
		{
			break;
		}
		else if (input < answer)
		{
			cout << "too small\n";
		}
		else if (input > answer)
		{
			cout << "too big\n";
		}
	}
	cout << "you found it\n";
	system("pause");


	return 0;
}