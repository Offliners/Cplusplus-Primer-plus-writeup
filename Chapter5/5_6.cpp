#include<iostream>

using namespace std;

const int n_months = 12;
const int n_years = 3;

int main(void)
{
	string months[n_months] = { "January", "February", "March", "April", "March", "June", "July", "August", "September", "October",  "November", "December" };
	int sales[n_years][n_months];
	int total = 0;

	for (int i = 0; i < n_years; i++)
	{
		int year_sum = 0;

		cout << "Year " << i + 1 << " :" << endl;
		for (int j = 0; j < n_months; j++)
		{
			cout << "Enter sales in " << months[j] << ": ";

			cin >> sales[i][j];
			year_sum += sales[i][j];
		}
		cout << "Total sales in year " << i + 1 << " is " << year_sum << endl;
		total += year_sum;
	}

	cout << "Total sales in the three years is " << total << endl;

	return 0;
}
