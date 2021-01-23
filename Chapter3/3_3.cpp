#include<iostream>

using namespace std;

int main(void)
{
	int d, m, s;
	double degree;

	const double minute2degree = 1 / 60.0;
	const double second2degree = 1 / 60.0 / 60.0;

	cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
	
	cout << "First, enter the degrees: ";
	cin >> d;

	cout << "Second, enter the minutes of arc: ";
	cin >> m;

	cout << "Finally, enter the seconds of arc: ";
	cin >> s;

	degree = d + m * minute2degree + s * second2degree;

	cout << d << " degrees, " << m << " minutes, " << s << " seconds = " << degree << " degrees" << endl;

	return 0;
}
