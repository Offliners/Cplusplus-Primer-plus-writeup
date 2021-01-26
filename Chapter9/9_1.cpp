#include<iostream>
#include"golf.h"

using namespace std;

const int num = 8;

int main(void)
{
	int i, hc;
	int count;
	char temp[Len];
	golf* pc = new golf[num];

	count = 0;
	for (i = 0; i < num && setgolf(pc[i]); i++)
		count++;

	for (int i = 0; i < count; i++)
	{
		cout << "PC " << i + 1 << " :\n";
		showgolf(pc[i]);
	}

	golf* player = new golf[num];
	
	count = 0;
	for (i = 0; i < num; i++)
	{
		cout << "Enter the player name :\n";
		cin.getline(temp, Len);

		if (temp[0] == '\0' || cin.eof())
			break;
		else
		{
			count++;
			cout << "Enter the handicap : ";
			cin >> hc;
			cin.get();
			setgolf(player[i], temp, hc);
		}
	}

	for (int i = 0; i < count; i++)
	{
		cout << "Player " << i + 1 << " :\n";
		showgolf(player[i]);
	}

	delete[] pc;
	delete[] player;

	return 0;
}

