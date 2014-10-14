/*
#include <iostream>


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

		cout << "Between " << min << " and " << max << ", " << output <<" has a maximum of " << outputdivisors << " divisors."<< endl;
		divisors = 0;
		outputdivisors = 0;


	}





	//system("pause");
	return 0;
}

int divisorscount(int input)
{
	
	
	//cout << count;
	return count;
}
*/