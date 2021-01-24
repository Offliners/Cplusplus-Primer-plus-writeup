#include<iostream>
#include<array>

using namespace std;

int main(void)
{
	array<double, 3> time;

	cout << "Enter three times for the dash :" << endl;
	cin >> time.at(0);
	cin >> time.at(1);
	cin >> time.at(2);

	cout << "First time : " << time.at(0) << endl;
	cout << "Second time : " << time.at(1) << endl;
	cout << "Third time : " << time.at(2) << endl;
	cout << "Average dash time = " << (time.at(0) + time.at(1) + time.at(2)) / 3 << endl;

	return 0;
}
