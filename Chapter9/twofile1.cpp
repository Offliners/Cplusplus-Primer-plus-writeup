#include<iostream>

using namespace std;

int tom = 3;
int dick = 30;
static int harry = 300;

void remote_access(void);

int main(void)
{
	cout << "main() reports the following address:\n";
	cout << &tom << " = &tom, " << &dick << " = &dick, ";
	cout << &harry << " = &harry\n";
	remote_access();

	return 0;
}
