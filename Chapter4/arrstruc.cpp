#include<iostream>

using namespace std;

struct inflatable
{
	char name[20];
	float volumn;
	double price;
};

int main(void)
{
	inflatable guest[2] =
	{
		{"Bambi", 0.5, 21.99},
		{"Godzilla", 2000, 565.99}
	};

	cout << "The guests " << guest[0].name << " and " << guest[1].name << "\nhave a combined volumn of " << guest[0].volumn + guest[1].volumn << " cubic feet.\n";

	return 0;
}
