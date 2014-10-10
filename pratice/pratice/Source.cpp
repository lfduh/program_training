#include <iostream>
#include <vector>

using namespace std;

int objnum;


class ClassObj
{
		int data;

	public:
		int publicdata;


};

struct StructObj
{
		int data = 1;
	public:
		int publicdata;
};

vector<int> classobjary;
vector<StructObj> structobjary;


int main()
{
	cin >> objnum;

	struct StructObj defaultstructure;


	for (int i = 1; i <= objnum; i++)
	{
		classobjary.push_back(i);
		structobjary.push_back(defaultstructure);
	}

	for (int i = 1; i <= classobjary.size(); i++)
	{

		cout << classobjary[i];
		cout << structobjary[i].data;
	}
	

	system("pause");
	return 0;
}
