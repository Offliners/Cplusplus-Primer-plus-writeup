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
	inflatable* ps = new inflatable;

	cout << "Enter name of inflatable item: ";
	cin.get(ps->name, 20);

	cout << "Enter volumn in cubic feet: ";
	cin >> (*ps).volumn;

	cout << "Enter price: $";
	cin >> ps->price;

	cout << "Name: " << (*ps).name << endl;
	cout << "Volumn: " << ps->volumn << " cubic feet\n";
	cout << "Price: $" << ps->price << endl;

	delete ps;

	return 0;
}
