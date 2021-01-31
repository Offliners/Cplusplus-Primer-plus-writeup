#include<iostream>

using namespace std;

const int n_months = 12;

int main(void)
{
	string months[n_months] = { "January", "February", "March", "April", "March", "June", "July", "August", "September", "October",  "November", "December" };
	int sales[n_months];
	int sum = 0;

	for (int i = 0; i < n_months; i++)
	{
		cout << "Enter sales in " << months[i] << ": ";
		
		cin >> sales[i];
		sum += sales[i];
	}

	cout << "Total sales in this year is " << sum << endl;

	return 0;
}
