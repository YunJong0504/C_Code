#include <iostream>
using namespace std;

struct Train
{
	int win;
	char name[8];
};

int Compare(char n1[8], char n2[8])
{
	if (strlen(n1) != strlen(n2))
		return 0;
	else
	{
		for (int i = 0; i < 8; i++)
		{
			if (n1[i] != n2[i])
				return 0;
		}
		return 1;
	}
}

int main()
{
	Train t[7] = { {15,"summer"},{33,"cloe"},{24,"summer"},{28,"niki"},{32,"jenny"},{20,"summer"},{40,"coco"} };

	Train tomlove = {};
	cin >> tomlove.win >> tomlove.name;

	for (int i = 0; i < 7; i++)
	{
		if (t[i].win == tomlove.win)
		{
			if (Compare(t[i].name, tomlove.name) == 1)
			{
				cout << i;
			}
		}
	}

	return 0;
}
