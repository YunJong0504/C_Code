#include <iostream>
using namespace std;

void GetMax(int* dy, int* dx, int arr[2][3])
{
	int max = INT_MIN;
	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			if (arr[y][x] > max)
			{
				max = arr[y][x];
				*dy = y;
				*dx = x;
			}
		}
	}
}
void GetMin(int* dy, int* dx, int arr[2][3])
{
	int min = INT_MAX;
	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			if (arr[y][x] < min)
			{
				min = arr[y][x];
				*dy = y;
				*dx = x;
			}
		}
	}
}

int main()
{
	int arr[2][3] = {};
	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			cin >> arr[y][x];
		}
	}
	int maxY, maxX;
	int minY, minX;

	GetMax(&maxY, &maxX, arr);
	GetMin(&minY, &minX, arr);

	cout << "(" << maxY << "," << maxX << ")" << endl;
	cout << "(" << minY << "," << minX << ")" << endl;

	return 0;
}
