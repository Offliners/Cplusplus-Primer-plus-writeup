#include<iostream>

using namespace std;

int main(void)
{
	const int inch2feet = 12;
	int height, inch, feet;

	cout << "Enter your height in inch : ___\b\b\b";
	cin >> height;

	feet = height / inch2feet;
	inch = height % inch2feet;

	cout << height << " inches = " << feet << " feet " << inch << " inches." << endl;

	return 0;
}
