#include<iostream>

using namespace std;

double warming = 0.3;
void update(double dt);
void local(void);

int main(void)
{
	cout << "Global warming is " << warming << " degrees.\n";
	update(0.1);
	cout << "Global warming is " << warming << " degrees.\n";
	local();
	cout << "Global warming is " << warming << " degrees.\n";

	return 0;
}
