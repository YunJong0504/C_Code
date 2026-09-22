#include <iostream>
#include <cstring>
using namespace std;

int arr[4][4] = {};

int main()
{
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			cin >> arr[y][x];
		}
	}

	for (int y = 0; y < 3; y++)
	{
		int sum = 0;
		for (int x = 0; x < 3; x++)
		{
			sum += arr[y][x];
		}
		arr[y][3] = sum;
	}

	arr[3][3] = arr[0][0] + arr[1][1] + arr[2][2];

	for (int x = 0; x < 3; x++)
	{
		int sum = 0;
		for (int y = 0; y < 3; y++)
		{
			sum += arr[y][x];
		}
		arr[3][x] = sum;
	}

	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			cout << arr[y][x] << " ";
		}
		cout << endl;
	}

	return 0;
}
