#include<iostream>
#include<cstring>

using namespace std;

int main(void)
{
	int count = 0;
	char input[20];

	cout << "Enter words (to stop, type the word done):\n";
	
	do
	{
		cin >> input;
		count++;
	} while (strcmp(input, "done"));

	cout << "You entered a total of " << count - 1 << " words" << endl;

	return 0;
}
