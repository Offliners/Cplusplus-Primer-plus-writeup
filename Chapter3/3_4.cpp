#include<iostream>

using namespace std;

int main(void)
{
	long long s;
	int day, hour, min, sec;

	const int sec2min = 60;
	const int sec2hour = 60 * 60;
	const int sec2day = 60 * 60 * 24;

	cout << "Enter the number of seconds: ";
	cin >> s;

	day = s / sec2day;
	hour = (s % sec2day) / sec2hour;
	min = ((s % sec2day) % sec2hour) / sec2min;
	sec = ((s % sec2day) % sec2hour) % sec2min;

	cout << s << " seconds = " << day << " days, " << hour << " hours, " << min << " minutes, " << sec << " seconds." << endl;

	return 0;
}
