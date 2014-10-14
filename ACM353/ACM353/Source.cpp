#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>

using namespace std;
int is_palindrome(string);
vector<string> vecPalindrome;

int main()
{
	char input[100];
	int inputlength;
	int length;
	int start;
	int  palindromes = 0;
	while (cin >> input)
	{
		//cout << input << strlen(input) <<  endl;
		inputlength = strlen(input);
		palindromes = 0;

		for (length = 1; length <= inputlength; length++)
		{
			for (start = 0; start <= inputlength - length; start++)
			{
				string tempstring;
				for (int i = 0; i < length ; i++)
				{
					//cout << input[i+start];
					tempstring = tempstring + input[i + start];

				}
				//cout << is_palindrome(tempstring);
				if (is_palindrome(tempstring))
				{
					
					if (find(vecPalindrome.begin(), vecPalindrome.end(), tempstring) == vecPalindrome.end())
					{
						vecPalindrome.push_back(tempstring);
						palindromes++;
					}
					
				}
				//cout << endl;
			}
		}
		//cout << "palindromes : " << palindromes << vecPalindrome.size() << endl;
		cout <<"The string '"<< input <<"' contains " << vecPalindrome.size() <<" palindromes."<< endl;
		vecPalindrome.clear();
	}
	
	
	return 0;
}

int is_palindrome(string s)
{
	//cout << s;
	return equal(s.begin(), s.begin() + s.length() / 2, s.rbegin());
}

