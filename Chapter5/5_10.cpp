#include<iostream>

using namespace std;

int main(void)
{
	int row;

	cout << "Enter the number of rows: ";
	cin >> row;

	for (int i = 0; i < row; ++i)
	{
		for (int j = row - i - 1; j > 0; --j)
			cout << ".";

		for (int t = i + 1; t > 0; --t)
			cout << "*";

		cout << endl;
	}

	return 0;
}
