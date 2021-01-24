#include<iostream>

using namespace std;

int main(void)
{
	const int ArSize = 15;
	char name1[ArSize];
	char name2[ArSize] = "C++owboy";

	cout << "Howdy! I'm " << name2;
	cout << "! What's your name?\n";
	cin >> name1;
	cout << "Well, " << name1 << ", your name has ";
	cout << strlen(name1) << " letters and is stored\n";
	cout << "in an array of " << sizeof(name1) << " bytes.\n";
	cout << "Your initial is " << name1[0] << ".\n";

	name2[3] = '\0';
	cout << "Here are the fist 3 characters of my name: ";
	cout << name2 << endl;

	return 0;
}
