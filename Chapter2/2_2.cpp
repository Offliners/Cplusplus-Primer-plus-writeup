#include<iostream>

using namespace std;

int main(void)
{
	double furlong, yard;

	cout << "Please inout distance in furlong : ";
	cin >> furlong;

	yard = furlong * 220;

	cout << furlong << " furlong = " << yard << " yard" << endl;

	return 0;
}
