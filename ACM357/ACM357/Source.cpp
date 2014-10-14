#include <iostream>
#include <vector>
#include <string>
using namespace std;


int countnum = 0;
string count(int);

struct solution
{
	public:
		int penny;	//1 cent
		int nickel;	//5 cents
		int dime;	//10 cents
		int quarter;//25 cents
		int hdollar;//50 cents

};
vector<solution> solutioncount;

int main()
{
	int cent;
	
	while (cin >> cent)
	{
		
		countnum = 0;
		cout << count(cent) << endl;

	}
	

	system("pause");
	return 0;
}


string count(int input)
{

	if (input >= 50 )
	{
		return "50 " + count(input - 50);
	}

	if (input >= 25)
	{
		return "25 " + count(input - 25);
	}

	if (input >= 10 )
	{
		return "10 " + count(input - 10);
	}

	if (input >= 5)
	{
		return "5 " + count(input - 5);
	}

	if (input >= 1)
	{
		return "1 " + count(input - 1);
	}

	if (input == 0)
	{
		return ".";
	}
	
}