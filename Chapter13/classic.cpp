#include<iostream>
#include<cstring>
#include"classic.h"

using namespace std;

Classic::Classic(const char* pw, const char* s1, const char* s2, int n, double x) : Cd(s1, s2, n, x)
{
	p_work = new char[strlen(pw) + 1];
	strcpy(p_work, pw);
}

Classic::Classic(const Classic& c) : Cd(c)
{
	p_work = new char[strlen(c.p_work) + 1];
	strcpy(p_work, c.p_work);
}

Classic::Classic() : Cd()
{
	p_work = new char[1];
	p_work[0] = '\0';
}

Classic::~Classic()
{
	delete[] p_work;
}

void Classic::Report() const
{
	Cd::Report();

	cout << "Primary work: " << p_work << endl;
}

Classic& Classic::operator = (const Classic& c)
{
	if (this == &c)
		return *this;

	Cd::operator=(c);
	delete[] p_work;
	p_work = new char[strlen(c.p_work) + 1];
	strcpy(p_work, c.p_work);
	
	return *this;
}
