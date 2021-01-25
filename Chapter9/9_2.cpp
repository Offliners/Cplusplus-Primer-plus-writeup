#include<iostream>
#include<string>

using namespace std;

void strcount(string);

int main(void)
{
	string str;

	cout << "Enter a line (empty line to quit):\n";
	while (getline(cin, str) && str != "")
		strcount(str);

	return 0;
}

void strcount(string str)
{
	static int total = 0;

	total += str.size();

	cout << "\"" << str << "\" contains ";
	cout << str.size() << " characters\n";
	cout << total << " characters total\n";
}
