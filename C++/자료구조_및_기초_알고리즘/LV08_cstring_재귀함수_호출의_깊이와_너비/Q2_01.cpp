#include <iostream>
#include <cstring>
using namespace std;

char str[4][3] = {};

void input()
{
	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			cin >> str[y][x];
		}
	}
}

int main()
{
	input();
	int aY, aX;
	int bY, bX;
	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			if (str[y][x] == 'A')
			{
				aY = y;
				aX = x;
			}
			if (str[y][x] == 'B')
			{
				bY = y;
				bX = x;
			}
		}
	}
	int resultY, resultX;

	if (aY > bY)
		resultY = aY - bY;
	else
		resultY = bY - aY;

	if (aX > bX)
		resultX = aX - bX;
	else
		resultX = bX - aX;
	cout << resultY + resultX;

	return 0;
}
