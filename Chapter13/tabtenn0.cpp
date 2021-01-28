#include<iostream>
#include"tabtenn0.h"

using namespace std;

TableTennisPlayer::TableTennisPlayer(const string& fn, const string& ln, bool ht) : firstname(fn), lastname(ln), hasTable(ht) {};

void TableTennisPlayer::Name() const
{
	cout << lastname << ", " << firstname;
}
