#include<iostream>

using namespace std;

int stonetolb(int);

int main(void)
{
	int stone, pounds;

	cout << "Enter the weight in stone: ";
	cin >> stone;

	pounds = stonetolb(stone);
	cout << stone << " stone = ";
	cout << pounds << " pounds." << endl;

	return 0;
}

int stonetolb(int sts)
{
	return 14 * sts;
}
