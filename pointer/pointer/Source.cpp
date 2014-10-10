#include <iostream>

int iValue = 10;
int *ipointer = &iValue;
char *pValue[2] = { "Ken", "Yang" };

using namespace std;


int main()
{
	cout <<"指向的記憶體的值" <<*ipointer <<endl;
	cout << "儲存的記憶體位置" << ipointer << endl;
	cout << "儲存記憶體位置的記憶體位置" << &ipointer << endl;
	cout << "Value的記憶體位置" << &iValue << endl;

	cout << "ipointer的記憶體大小" << sizeof(ipointer) << endl;
	cout << "值的記憶體大小" << sizeof(iValue) << endl;

	cout << pValue[0] << endl;

	system("pause");
	return 0;


}
	