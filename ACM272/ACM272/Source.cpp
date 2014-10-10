#include <iostream>;

using namespace std;

int main()
{
	char input;
	bool odd = true;
	while (cin >> std::noskipws >> input)
	{
		if (input == '"')
		{
			if (odd)
			{
				cout << "``";
				odd = false;
			}
			else
			{
				cout << "''";
				odd = true;
			}
		}		
		else
		{
			 cout << input;
		}
	}


	system("pause");
	return 0;

}