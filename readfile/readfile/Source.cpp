#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	char line[100];

	fstream fin;
	
	fin.open("testfile.txt", ios::in);

	
	while (fin >>line )
	{
		cout << line << endl;

	}


	system("pause");
	return 0;


}