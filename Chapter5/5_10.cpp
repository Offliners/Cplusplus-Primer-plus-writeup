#include<iostream>

using namespace std;

int main(void)
{
	int row;

	cout << "Enter the number of rows: ";
	cin >> row;

	for (int i = 0; i < row; i++)
	{
		for (int j = row - i - 1; j > 0; j--)
			cout << ".";

		for (int k = i + 1; k > 0; k--)
			cout << "*";

		cout << endl;
	}

	return 0;
}
