#include<iostream>
#include<array>

using namespace std;

const int ArSize = 101;

int main(void)
{
	array<long double, ArSize> factorials;

	factorials.at(0) = 0;
	factorials.at(1) = 1;
	for (int i = 2; i < ArSize; i++)
		factorials[i] = i * factorials[i - 1];

	for (int i = 0; i < ArSize; i++)
		cout << i << "! = " << factorials.at(i) << endl;

	return 0;
}
