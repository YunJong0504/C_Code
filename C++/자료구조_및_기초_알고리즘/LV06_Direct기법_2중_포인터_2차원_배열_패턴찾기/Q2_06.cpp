#include <iostream>
using namespace std;

char map[3][4] = {
	'A','B','G','K',
	'T','T','A','B',
	'A','C','C','D'
};
char pattern[2][2] = {};

void Input()
{
	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 2; x++)
		{
			cin >> pattern[y][x];
		}
	}
}

int isPattern(int y, int x)
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			if (map[y + i][x + j] != pattern[i][j])
			{
				return 0;
			}
		}
	}
	return 1;
}

int main()
{
	Input();
	int flag = 0;

	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			flag += isPattern(y, x);
		}
	}
	if (flag == 0)
	{
		cout << "미발견";
	}
	else
	{
		cout << "발견(" << flag << "개)";
	}

	return 0;
}
