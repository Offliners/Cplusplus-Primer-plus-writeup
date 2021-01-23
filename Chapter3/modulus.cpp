#include<iostream>

using namespace std;

int main(void)
{
	const int Lbs_per_stn = 14;
	int lbs;
	
	cout << "Enter your wight in pounds: ";
	cin >> lbs;

	int stone = lbs / Lbs_per_stn;
	int pounds = lbs % Lbs_per_stn;

	cout << lbs << " pounds are " << stone << " stone, " << pounds << " pound(s).\n";

	return 0;
}
