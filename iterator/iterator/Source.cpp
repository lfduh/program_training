#include <iostream>
#include <vector>

using namespace std;
vector<int> test;
struct Str
{
	public:
		int value;


};
vector<Str> StrVec;

int main()
{
	for (int i = 1; i <= 5; i++)
	{
		test.push_back(i);
		
		struct Str Strobj;
		Strobj.value = i;
		StrVec.push_back(Strobj);
	}


	vector <int>::iterator itr = test.begin();
	vector <Str>::iterator Stritr = StrVec.begin();

	for (itr; itr < test.end(); itr++, Stritr++)
	{

		//cout << *itr;
		cout << Stritr->value; 
		cout << (*Stritr).value;
		
		//cout << test[2];
		//cout << *test.begin() << *(test.rbegin() +2 );
	}
	//return equal(s.begin(), s.begin() + s.length() / 2, s.rbegin());
	system("pause");
}