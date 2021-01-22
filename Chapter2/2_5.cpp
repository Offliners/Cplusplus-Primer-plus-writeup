#include<iostream>

using namespace std;

int main(void)
{
	double C, F;

	cout << "Please enter a Celsius value: ";
	cin >> C;

	F = 1.8 * C + 32;

	cout << C << " degrees Celsius is " << F << " degrees Fahrenheit." << endl;

	return 0;
}
