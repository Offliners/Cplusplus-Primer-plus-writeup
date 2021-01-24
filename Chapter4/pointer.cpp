#include<iostream>

using namespace std;

int main(void)
{
	int updates = 6;
	int* p_updates;

	p_updates = &updates;

	cout << "Values : updates = " << updates;
	cout << ", *p_updates = " << *p_updates << endl;

	cout << "Values : &updates = " << &updates;
	cout << ", p_updates = " << p_updates << endl;

	*p_updates = *p_updates + 1;
	cout << "Now updates = " << updates << endl;

	return 0;
}
