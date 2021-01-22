#include<iostream>

using namespace std;

int main(void)
{
	double LY, AU;

	cout << "Enter the number of light years: ";
	cin >> LY;

	AU = LY * 63240;

	cout << LY << " light years = " << AU << " astronomical units." << endl;

	return 0;
}
