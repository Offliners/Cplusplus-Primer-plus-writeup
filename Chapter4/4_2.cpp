#include<iostream>
#include<string>

using namespace std;

int main(void)
{
	string fname;
	string lname;
	char grade;
	int age;

	cout << "What is your first name? ";
	getline(cin, fname);

	cout << "What is your last name? ";
	getline(cin, lname);

	cout << "What letter grade do you deserve? ";
	cin >> grade;

	cout << "What is your age? ";
	cin >> age;

	cout << "Name: " << lname << ", " << fname << endl;
	cout << "Grade: " << char(grade + 1) << endl;
	cout << "Age: " << age;

	return 0;
}
