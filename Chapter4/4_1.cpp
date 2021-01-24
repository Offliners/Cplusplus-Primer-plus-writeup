#include<iostream>
#include<string>

using namespace std;

int main(void)
{
	const int ArSize = 21;
	char fname[ArSize];
	char lname[ArSize];
	char grade;
	int age;

	cout << "What is your first name? ";
	cin.getline(fname, ArSize);

	cout << "What is your last name? ";
	cin.getline(lname, ArSize);

	cout << "What letter grade do you deserve? ";
	cin >> grade;

	cout << "What is your age? ";
	cin >> age;

	cout << "Name: " << lname << ", " << fname << endl;
	cout << "Grade: " << char(grade + 1) << endl;
	cout << "Age: " << age;

	return 0;
}
