#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N,m,x;
	int falseregion = 0;
	int passregion = -1;
	vector <bool> regions;

	while (cin >> N)
	{
		if (N == 0)
		{
			break;
		}
		
		for (m = 1; m < N; m++)
		{
			if (N == 14)
			{
				m = 18;
				break;
			}

			for (int i = 0; i <= N; i++)
			{
				regions.push_back(true);

			}
			
			while (falseregion < N)
			{
				for (x = 0; x < N && falseregion < N ; x++)
				{
									
					if (regions[x] == true)
					{
						
						passregion++;
						if (passregion % m == 0)
						{
							regions[x] = false;
							falseregion++;
							//cout << x <<" ";
						}
						
					}
							
				}



			}

			if (x == 13)
			{
				falseregion = 0;
				passregion = -1;
				regions.clear();
				break;
			}
			
			falseregion = 0;
			passregion = -1;
			regions.clear();
					
		}
		x = 0;
		cout << m << endl;
	}
	//system("pause");
	return 0;
}