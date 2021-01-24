#include<iostream>
#include<string>

using namespace std;

struct Pizza
{
	string name;
	double diameter;
	double weight;
};

int main(void)
{
	Pizza* p = new Pizza;

	cout << "Enter the diameter of the pizza : ";
	cin >> p->diameter;

	getline(cin, p->name);

	cout << "Enter the name of the pizza company : ";
	getline(cin, p->name);

	cout << "Enter the weight of the pizza : ";
	cin >> p->weight;

	cout << endl;
	cout << "The Pizza Imformation :" << endl;
	cout << "Company name : " << p->name << endl;
	cout << "Pizza diameter : " << p->diameter << endl;
	cout << "Pizza weight : " << p->weight << endl;

	delete p;

	return 0;
}
