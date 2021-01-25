#include<iostream>

using namespace std;

int main(void)
{
	int limit, i;

	cout << "Enter the starting coutndown value: ";
	cin >> limit;

	for (i = limit; i; i--)
		cout << "i = " << i << "\n";

	cout << "Done now that i = " << i << "\n";

	return 0;
}
