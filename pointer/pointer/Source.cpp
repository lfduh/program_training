#include <iostream>

int iValue = 10;
int *ipointer = &iValue;
char *pValue[2] = { "Ken", "Yang" };

using namespace std;


int main()
{
	cout <<"���V���O���骺��" <<*ipointer <<endl;
	cout << "�x�s���O�����m" << ipointer << endl;
	cout << "�x�s�O�����m���O�����m" << &ipointer << endl;
	cout << "Value���O�����m" << &iValue << endl;

	cout << "ipointer���O����j�p" << sizeof(ipointer) << endl;
	cout << "�Ȫ��O����j�p" << sizeof(iValue) << endl;

	cout << pValue[0] << endl;

	system("pause");
	return 0;


}
	