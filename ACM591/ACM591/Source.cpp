#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int stacknum;
	vector <int> stack;
	int totalheight = 0,avgheight,movement=0 ,setnum = 0;

	while (cin >> stacknum)
	{
		if (stacknum == 0)
		{
			break;
		}

		for (int i = 0; i < stacknum; i++)
		{
			stack.push_back(0);

		}

		//標準版vector處理方法
		/*for (vector<int> :: iterator i = stack.begin(); i != stack.end(); i++)
		{
		cin >> *i;
		}*/

		for (int i = 0; i < stack.size(); i++)
		{
			cin >> stack[i];
		}

		for (int i = 0; i < stack.size(); i++)
		{
			totalheight = totalheight + stack[i];

		}
		avgheight = totalheight / stacknum;
		//cout << avgheight << endl;
		
		for (int i = 0; i < stack.size(); i++)
		{
			if (stack[i] > avgheight)
			{
				movement += (stack[i] - avgheight);
			}
			
		}
		setnum++;
		cout <<"Set #" << setnum << endl << "The minimum number of moves is " << movement << "." << endl << endl;
		stack.clear();
		totalheight = 0;
		movement = 0;
		

	}
		//cout << "\capacity: " << stack.capacity() << endl
		//	 << "size: " << stack.size() << endl;
	
	//system("pause");
	return 0;

}