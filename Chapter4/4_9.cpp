#include<iostream>

using namespace std;

struct CandyBar
{
	string brand;
	double weight;
	int cal;
};

int main(void)
{
	CandyBar* snack = new CandyBar[3];

	snack[0] = { "Mocha Munch", 2.3, 350 };
	snack[1] = { "Mocha Munch", 2.3, 350 };
	snack[2] = { "Mocha Munch", 2.3, 350 };

	cout << "Snack 1 :" << endl;
	cout << "Snack name : " << snack[0].brand << endl;
	cout << "Snack weight : " << snack[0].weight << endl;
	cout << "Snack calories : " << snack[0].cal << endl;
	cout << endl;

	cout << "Snack 2 :" << endl;
	cout << "Snack name : " << snack[1].brand << endl;
	cout << "Snack weight : " << snack[1].weight << endl;
	cout << "Snack calories : " << snack[1].cal << endl;
	cout << endl;

	cout << "Snack 3 :" << endl;
	cout << "Snack name : " << snack[2].brand << endl;
	cout << "Snack weight : " << snack[2].weight << endl;
	cout << "Snack calories : " << snack[2].cal << endl;
	cout << endl;

	delete[] snack;

	return 0;
}
