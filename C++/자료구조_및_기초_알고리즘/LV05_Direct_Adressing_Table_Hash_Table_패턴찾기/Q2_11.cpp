#include <iostream>
using namespace std;

char str[12] = {};
char ghost[6] = "GHOST";

int isPattern(int idx)
{
	for (int i = 0; i < 5; i++)
	{
		if (str[idx + i] != ghost[i])
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	cin >> str;
	for (int i = 0; i < 6; i++)
	{
		if (isPattern(i) == 1)
		{
			cout << "존재";
			return 0;
		}
	}
	cout << "존재하지않음";

	return 0;
}
