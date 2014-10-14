#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	int hour = 0, minute = 0;
	char input[100];
	char hourchar[2] = { 0 }, minutechar[2] = { 0 };
	float finalangle ,minuteangle, hourangle;

	
	while (cin >> input)
	{
		hour = atoi(input);
		if (hour < 10)
		{
			minutechar[0] = input[2];
			minutechar[1] = input[3];
		}
		else
		{
			minutechar[0] = input[3];
			minutechar[1] = input[4];
		}
		minute = atof(minutechar);

		minuteangle = minute * 6;
		hourangle = hour * 30 + minute / 2.0f;
		if (hour == 0 && minute == 0)
		{
			break;
		}
		

		finalangle = abs(hourangle - minuteangle);
		finalangle = finalangle > 180 ? 360 - finalangle : finalangle;
		cout << fixed << setprecision(3) << finalangle << endl;
		
	}
	return 0;
}