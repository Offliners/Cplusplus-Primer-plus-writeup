#include<iostream>
#include<climits>

#define ZERO 0

using namespace std;

int main(void)
{
	short sam = SHRT_MAX;
	unsigned short sue = sam;

	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited." << endl
		 << "Add $1 to each account." << endl << "Now ";

	sam += 1;
	sue += 1;

	cout << "Sam has " << sam << " doaalrs and Sue has " << sue;
	cout << " dollars deposited.\nPoor Sam!" << endl;

	sam = ZERO;
	sue = ZERO;

	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited." << endl;
	cout << "Take $1 from each account." << endl << "Now ";

	sam -= 1;
	sue -= 1;

	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited." << endl << "Lucky Sue!" << endl;

	return 0;
}
