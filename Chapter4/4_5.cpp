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
	CandyBar snack =
	{
		"Mocha Munch",
		2.3,
		350
	};

	cout << "Snack name : " << snack.brand << endl;
	cout << "Snack weight : " << snack.weight << endl; 
	cout << "Snack calories : " << snack.cal << endl;
	
	return 0;
}
