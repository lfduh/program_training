#include <iostream>

using namespace std;

int main()
{
	long long input, x = 0, y = 0;
	while (cin >> input)
	{
		cout << 3 * (input + 1)*(input + 1) / 2 - 9;
		
		for (x = 1; x <= input; x += 2)
		{
			y += x;
		}
		if (input >= 3)
		{
			cout << 3 * (1 + 2 * (y - 3)) + 6 << endl;
			
		}
		else
		{
			cout << 1 << endl;
		}
		y = 0;

	}
	return 0;
}