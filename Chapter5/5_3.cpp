#include<iostream>

using namespace std;

int main(void)
{
	int n;
	int sum = 0;

	cout << "Enter a nmuber (0 to quit): ";
	while (cin >> n && n)
	{
		sum += n;
		cout << "Currently sum = " << sum << endl;
		cout << "Enter a nmuber (0 to quit): ";
	}

	return 0;
}
