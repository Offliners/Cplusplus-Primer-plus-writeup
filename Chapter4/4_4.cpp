#include<iostream>
#include<string>

using namespace std;

int main(void)
{
	string fname;
	string lname;
	string name;

	cout << "What is your first name? ";
	getline(cin, fname);

	cout << "What is your last name? ";
	getline(cin, lname);

	name = lname + ", " + fname;
	cout << "Here's the imformation in a single string: " << name << endl;

	return 0;
}
