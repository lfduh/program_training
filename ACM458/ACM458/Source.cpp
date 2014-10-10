#include <iostream>;
//#include <stdlib.h>;
using namespace std;


int main()
{
	char input;
	

	while (cin >> std::noskipws >> input)
	{
		
			input = (int)input - 7;
			if ((int)input != 3)
			{
				cout << input;
			}
	}
	
	//system("PAUSE");
	
}