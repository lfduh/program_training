#include <iostream>
#include <math.h>

using namespace std;

int divisorscount(int);

int main()
{
	int min, max;
	int divisors = 0;
	int N;
	int output = 0, outputdivisors = 0;



	cin >> N;
	for (int x = 1; x <= N; x++)
	{

		cin >> min >> max;

		for (int i = min; i <= max; i++)
		{

			divisors = divisorscount(i);

			if (divisors > outputdivisors)
			{
				output = i;
				outputdivisors = divisors;
			}
			divisors = 0;
		}

		cout << "Between " << min << " and " << max << ", " << output << " has a maximum of " << outputdivisors << " divisors." << endl;
		divisors = 0;
		outputdivisors = 0;


	}

	system("pause");
	return 0;
}

int divisorscount(int input)
{
	int i = 1;
	int count = 0;
	int sqrtInput = sqrt(input);
	
	for (i = 1; i <= sqrt(input); i++)
	{
		if (input % i == 0)
		{
			count++;
		}
	}
	
	count *= 2;
	
	if (sqrtInput == sqrt(input) || input ==1)
	{
		count--;
	}
	return count;
}