#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int main(void)
{
	char charr1[20];
	char charr2[20] = "jaquar";
	string str1;
	string str2 = "panther";

	str1 = str2;
	strcpy(charr1, charr2);

	str1 += " paste";
	strcat(charr1, " juice");

	int len1 = str1.size();
	int len2 = strlen(charr1);

	cout << "The string " << str1 << " contains " << len1 << " characters.\n";
	cout << "The string " << charr1 << " contains " << len2 << " characters.\n";

	return 0;
}
