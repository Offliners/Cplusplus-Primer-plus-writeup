#include<iostream>

using namespace std;

int main(void)
{
	int a, b;
	int sum = 0;

	cout << "Enter two numbers (split with space): ";
	cin >> a >> b;

	for (int i = a; i <= b; i++)
		sum += i;

	cout << "Total: " << sum << endl;

	return 0;
}
