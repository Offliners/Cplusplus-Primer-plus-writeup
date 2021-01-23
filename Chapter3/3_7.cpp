#include<iostream>

using namespace std;

int main(void)
{
	int Lper100Km;

	const double one_hus_km2miles = 62.14;
	const double gallon2L = 3.875;

	cout << "Enter the liter of gas consumption per 100 km: ";
	cin >> Lper100Km;

	cout << "mpg in US unit = " << Lper100Km * one_hus_km2miles * gallon2L << endl;

	return 0;
}
