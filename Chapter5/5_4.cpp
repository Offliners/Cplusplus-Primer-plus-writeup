#include<iostream>

using namespace std;

int main(void)
{
	double d_inv, c_inv;

	cout << "Enter the investment of Daphne: ";
	cin >> d_inv;

	cout << "Enter the investment of Cleo: ";
	cin >> c_inv;

	int i;
	double d_bal = d_inv;
	double c_bal = c_inv;
	for (i = 1; d_bal >= c_bal; i++)
	{
		d_bal += 0.1 * d_inv;
		c_bal += 0.05 * c_bal;
	}

	cout << "Cleo's current balance exceeds Daphne's investment " << i << " year \n";
	cout << "Cleo's balance is " << c_bal << endl;
	cout << "Daphne's balance is " << d_bal << endl;

	return 0;
}
