#include <iostream>
using namespace std;

int map[3][3] =
{
	3,5,1,
	3,8,1,
	1,1,5
};
int bitarray[2][2] = {};

int Sum(int y, int x)
{
	int sum = 0;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			if (bitarray[i][j] == 1)
			{
				sum += map[y + i][x + j];
			}
		}
	}
	return sum;
}

int main()
{
	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 2; x++)
		{
			cin >> bitarray[y][x];
		}
	}

	int max = INT_MIN;
	int dy, dx;
	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 2; x++)
		{
			if (Sum(y, x) > max)
			{
				max = Sum(y, x);
				dy = y;
				dx = x;
			}
		}
	}
	cout << "(" << dy << "," << dx << ")";

	return 0;
}
