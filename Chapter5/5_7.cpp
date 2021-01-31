#include<iostream>

using namespace std;

const int Size = 21;

struct CarType
{
	char make[Size];
	int year;
};

int main(void)
{
	int n;
	char temp[2];

	cout << "How many cars do you wish to catelog? ";
	cin >> n;
	cin.getline(temp, sizeof(temp));

	CarType *ct = new CarType[n];
	for(int i = 0; i < n; i++)
	{
		cout << "Car #" << i + 1 << ":" << endl;

		cout << "Please enter the make: ";
		cin.getline((ct + i)->make, Size);

		
		cout << "Please enter the year made: ";
		cin >> (ct + i)->year;
		cin.getline(temp, sizeof(temp));
	}

	cout << "Here is your collection:\n";
	for (int i = 0; i < n; i++)
		cout << (ct + i)->year << " " << (ct + i)->make << endl;

	return 0;
}
