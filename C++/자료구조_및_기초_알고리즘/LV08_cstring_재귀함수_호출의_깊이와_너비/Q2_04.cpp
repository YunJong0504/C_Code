#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char arr[4][3] = {};
	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			cin >> arr[y][x];
		}
	}
	for (int x = 0; x < 3; x++)
	{
		int n = 3;
		for (int y = 3; y >= 0; y--)
		{
			if (arr[y][x] != '_')
			{
				arr[n][x] = arr[y][x];
				arr[y][x] = '_';
				n--;
			}
		}
	}
	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			cout << arr[y][x];
		}
		cout << endl;
	}

	return 0;
}
