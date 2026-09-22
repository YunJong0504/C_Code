#include <iostream>
using namespace std;

int main()
{
	int idx[3][4] = {
		65000, 355, 42, 70,
		70, 35, 65000, 1300,
		65000, 30000, 38, 42
	};
	int arr[65535] = {};

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			arr[idx[y][x]]++;
		}
	}

	int max = INT_MIN;
	int index = 0;

	for (int i = 0; i < 65535; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			index = i;
		}
	}

	cout << index;

	return 0;
}
