#include <iostream>
using namespace std;

char map[4][5] =
{
	'_','_','_','_','_',
	'_','_','_','_','_',
	'_','_','_','_','_',
	'_','_','_','_','_'
};

int direct[8][2] =
{
	-1, -1,
	-1, 0,
	-1, 1,
	0, -1,
	0, 1,
	1, -1,
	1, 0,
	1, 1
};

void Bomb(int y, int x)
{
	for (int i = 0; i < 8; i++)
	{
		int newY = y + direct[i][0];
		int newX = x + direct[i][1];

		if (newY >= 0 && newY <= 3 && newX >= 0 && newX <= 4)
		{
			map[newY][newX] = '#';
		}
	}
}

int main()
{
	int y1, x1, y2, x2;
	cin >> y1 >> x1 >> y2 >> x2;

	Bomb(y1, x1);
	Bomb(y2, x2);

	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 5; x++)
		{
			cout << map[y][x] << " ";
		}
		cout << endl;
	}

	return 0;
}
