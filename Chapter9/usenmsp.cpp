#include<iostream>
#include"namesp.h"

using namespace std;

void other(void);
void another(void);

int main(void)
{
	using debts::Debt;
	using debts::showDebt;

	Debt golf = { {"Benny", "Goatsniff"}, 120.0 };

	showDebt(golf);
	other();
	another();

	return 0;
}

void other()
{
	using namespace debts;

	Person dg = { "Doodles", "Glister" };

	showPerson(dg);
	cout << endl;

	Debt zippy[3];
	int i;

	for (i = 0; i < 3; i++)
		getDebt(zippy[i]);

	for (i = 0; i < 3; i++)
		showDebt(zippy[i]);

	cout << "Total debt: $" << sumDebts(zippy, 3) << endl;

	return;
}

void another()
{
	using pers::Person;

	Person collector = { "Milo", "Rightshift" };
	pers::showPerson(collector);
	cout << endl;
}
