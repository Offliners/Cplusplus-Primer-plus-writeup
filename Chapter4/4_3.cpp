#include<iostream>
#include<cstring>

using namespace std;

int main(void)
{
	char fname[20];
	char lname[20];
	char name[42] = "";

	cout << "What is your first name? ";
	cin.getline(fname, 20);

	cout << "What is your last name? ";
	cin.getline(lname, 20);

	strcat(name, lname);
	strcat(name, ", ");
	strcat(name, fname);
	cout << "Here's the imformation in a single string: " << name << endl;

	return 0;
}
