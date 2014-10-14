#include <iostream>

using namespace std;

char angletoDir(int);

int main()
{
	enum Days{Sat,Sun,Mon,Tue,Wed,Thu,Fri};
	enum Dir{ N = 0 , E = 90 , S = 180 , W = 270 };
	const int testnum = 123;
	
	cout << angletoDir(E + 90);

	cout << testnum;
#pragma region name
	//testnum++;
	cout << testnum;
	//cout << Sun +1;
#pragma endregion comment

	
	system("pause");
	return 0;


}

char angletoDir(int input)
{
	switch (input)
	{
		case 0:
			return 'N';
			break;
		case 90:
			return 'E';
			break;
		case 180:
			return 'S';
			break;
		case 270:
			return 'W';
			break;


	}
}