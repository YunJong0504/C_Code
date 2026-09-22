#include <iostream>
using namespace std;

int main()
{
	char arr[2][6] = {};
	char arr1[12] = {};
	for (int i = 0; i < 2; i++)
	{
		cin >> arr[i];
	}

	int len[2] = {};

	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 6; x++)
		{
			if (arr[y][x] == 0)
				break;
			len[y]++;
		}
	}

	for (int i = 0; i < len[0]; i++)
	{
		arr1[i] = arr[0][i];
	}
	int idx = 0;
	for (int i = len[0]; i < 12; i++)
	{
		arr1[i] = arr[1][idx];
		idx++;
	}

	cout << arr1;
	
	return 0;
}
