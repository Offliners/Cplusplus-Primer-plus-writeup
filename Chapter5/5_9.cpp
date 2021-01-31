#include<iostream>

using namespace std;

int main(void)
{
	int count = 0;
	string input;

	cout << "Enter words (to stop, type the word done):\n";

	do
	{
		cin >> input;
		count++;
	} while (input != "done");

	cout << "You entered a total of " << count - 1 << " words" << endl;

	return 0;
}
