#include <iostream>
using namespace std;

int main()
{
	int arr[4][4] =
	{
		{3,4,1,6},
		{3,5,3,6},
		{0,0,0,0},
		{5,4,6,0}
	};

	for (int i = 0; i < 4; i++)
	{
		cin >> arr[2][i];
	}

	int MAX = INT_MIN;
	int MIN = INT_MAX;

	int maxY, maxX, minY, minX;

	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			if (arr[y][x] > MAX)
			{
				MAX = arr[y][x];
				maxY = y;
				maxX = x;
			}
			if (arr[y][x] < MIN)
			{
				MIN = arr[y][x];
				minY = y;
				minX = x;
			}
		}
	}

	cout << "MAX=" << MAX << "(" << maxY << "," << maxX << ")" << endl;
	cout << "MIN=" << MIN << "(" << minY << "," << minX << ")" << endl;

	return 0;
}
