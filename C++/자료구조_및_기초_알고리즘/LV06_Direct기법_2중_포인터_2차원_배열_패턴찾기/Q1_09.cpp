#include <iostream>
using namespace std;

int image[4][4] = {};

int rectSum(int y, int x)
{
	int sum = 0;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if ((y + i) > 3 || (x + j) > 3)
				break;
			sum += image[y + i][x + j];
		}
	}
	return sum;
}

int main()
{
	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			cin >> image[y][x];
		}
	}

	int max = INT_MIN;
	int dy, dx;

	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			if (rectSum(y, x) > max)
			{
				max = rectSum(y, x);
				dy = y;
				dx = x;
			}
		}
	}
	cout << "(" << dy << "," << dx << ")";

	return 0;
}
