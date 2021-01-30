#include<iostream>
#include<string>

using namespace std;

int main(void)
{
	string word;
	char temp;
	int i, j;

	cout << "Enter a word: ";
	cin >> word;
	
	for (j = 0, i = word.size() - 1; j < i; --i, ++j)
	{
		temp = word[i];
		word[i] = word[j];
		word[j] = temp;
	}
	cout << word << "\nDone\n";

	return 0;
}
