#include <iostream>
using namespace std;

int arr[5][4] = {};
int direct[8][2] =
{
	-1,-1,
	-1,0,
	-1,1,
	0,-1,
	0,1,
	1,-1,
	1,0,
	1,1
};

void Input()
{
	for (int y = 0; y < 5; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			cin >> arr[y][x];
		}
	}
}

int Find(int y, int x)
{
	for (int i = 0; i < 8; i++)
	{
		int newY = y + direct[i][0];
		int newX = x + direct[i][1];
		if (newY >= 0 && newY <= 4 && newX >= 0 && newX <= 3)
		{
			if (arr[newY][newX] == 1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int main()
{
	Input();
	int flag = 0;

	for (int y = 0; y < 5; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			if (arr[y][x] == 1)
			{
				flag = Find(y, x);
			}
		}
	}

	if (flag == 1)
	{
		cout << "불안정한 상태";
	}
	else if (flag == 0)
	{
		cout << "안정된 상태";
	}

	return 0;
}
