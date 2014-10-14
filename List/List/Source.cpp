#include <iostream>
#include <map>

using namespace std;

map<int, char> int2char;

int main()
{
	
	int2char.insert(pair<int, char>(1, 'A'));
	int2char.insert(map<int, char>::value_type(2, 'B'));
	int2char[3] = 'C';

	map<int, char >::iterator itr;

	//cout << *itr;
	itr = int2char.find(2);
	
	cout << itr->first;
	cout << &(itr->first);
	//cout << (*itr).first;
	//cout << (*itr).second;


	system("pause");
	return 0;
}