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
	int count = 1;
	int predivisor = 0;
	int exp = 1;
	
	//int sqrtInput = sqrt(input);
	while (input != 1)
	{
		for (int i = 2; i <= input; i++)
		{
			if (input % i == 0)
			{
				input = input / i;
				
				if (predivisor == 0)
				{
					predivisor = i;
					exp = 1;
				}
				else if(i == predivisor)
				{
					exp++;
				}
				else if (i != predivisor)
				{
					count = count *(exp + 1);
					predivisor = i;
					exp = 1;
				}
				
				//cout << i << " ";
				break;
								
			}
		}
	}
	if (predivisor != 0)
	{
		count = count *(exp + 1);
	}


	
	//cout << count;
	return count;
}