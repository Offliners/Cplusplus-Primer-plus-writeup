#include<iostream>

using namespace std;

int main(void)
{
	long long world, USA;

	cout << "Enter the world's population: ";
	cin >> world;

	cout << "Enter the population of the US: ";
	cin >> USA;

	cout << "The population of the US is " << USA * 100.0 / world << "% of the world population." << endl;

	return 0;
}
