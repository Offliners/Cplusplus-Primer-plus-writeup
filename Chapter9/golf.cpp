#include<iostream>
#include<cstring>
#include"golf.h"

using namespace std;

void setgolf(golf& g, const char* name, int hc)
{
	strcpy(g.fullname, name);
	g.handicap = hc;
}

int setgolf(golf& g)
{
	int count;
	char* pc = new char[Len];

	cout << "Enter the name of PC :\n";
	cin.getline(pc, Len);

	if (pc[0] == '\0' || cin.eof())
		return 0;
	else
	{
		cout << "Enter the handicap : ";
		cin >> count;
		cin.get();

		setgolf(g, pc, count);
		delete[] pc;

		return 1;
	}
}

void handicap(golf& g, int hc)
{
	g.handicap = hc;
}

void showgolf(const golf& g)
{
	cout << "Name : " << g.fullname << endl;
	cout << "Handicap : " << g.handicap << endl;
}
