#include<iostream>

using namespace std;

int main(void)
{
	int feet, inch, pound;
	double BMI;

	const double feet2inch = 12;
	const double inch2m = 0.0254;
	const double pound2Kg = 2.2;

	cout << "Enter your height in feet and inches (split with space): ";
	cin >> feet >> inch;

	cout << "Enter your weight in pounds: ";
	cin >> pound;

	BMI = pound / pound2Kg / ((feet * feet2inch + inch) * inch2m) / ((feet * feet2inch + inch) * inch2m);
	cout << "BMI = " << BMI << endl;

	return 0;
}
