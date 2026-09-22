#include <iostream>
using namespace std;

int main()
{
	char arr[4][7] = {};
	for (int i = 0; i < 4; i++)
	{
		cin >> arr[i];
	}
	int len[4] = {};

	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 7; x++)
		{
			if (arr[y][x] == 0)
				break;
			len[y]++;
		}
	}

	for (int i = 1; i < 4; i++)
	{
		int temp = len[i];
		int j = 0;
		for (j = i - 1; j >= 0; j--)
		{
			if (len[j] > temp)
				len[j + 1] = len[j];
			else
				break;
		}
		len[j + 1] = temp;
	}

	for (int i = 0; i < 4; i++)
	{
		cout << len[i] << " ";
	}

	return 0;
}
