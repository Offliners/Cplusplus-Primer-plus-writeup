#include<iostream>

using namespace std;

int main(void)
{
	int km, l;

	cout << "Enter kilometers you have driven and petrol liters you have used (split with space): ";
	cin >> km >> l;

	cout << l / km * 100 << " liters per 100 kilometers" << endl;

	return 0;
}
