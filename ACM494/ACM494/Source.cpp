#include <iostream>
using namespace std;

int main()
{
	char input;
	int count = 0;
	bool inword = false;
	while (cin >> std::noskipws >> input)
	{
		
		if (((input >= 'A' && input <= 'Z') || (input >= 'a' && input <= 'z')) && inword == false)
		{
			count++;
			inword = true;
		}
		if (!((input >= 'A' && input <= 'Z') || (input >= 'a' && input <= 'z')))
		{
			inword = false;
		}
		
		if (input == '\n')
		{
			cout << count << endl;
			count = 0;
			inword = false;
		}
	}
	
	return 0;
}