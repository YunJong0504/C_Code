#include <iostream>
using namespace std;

int main()
{
	char arr[2][6] = {};
	cin >> arr[0] >> arr[1];

	for (int y = 0; y < 2; y++)
	{
		for (int i = 1; i < 6; i++)
		{
			if (arr[y][i] == 0)
				break;
			char temp = arr[y][i];
			int j = 0;
			for (j = i - 1; j >= 0; j--)
			{
				if (arr[y][j] > temp)
					arr[y][j + 1] = arr[y][j];
				else
					break;
			}
			arr[y][j + 1] = temp;
		}
	}

	int len[2] = {};
	for (int j = 0; j < 2; j++)
	{
		for (int i = 0; i < 6; i++)
		{
			if (arr[j][i] == 0)
				break;
			len[j]++;
		}
	}

	char sum[11] = {};

	for (int i = 0; i < len[0]; i++)
	{
		sum[i] = arr[0][i];
	}
	for (int i = 0; i < len[1]; i++)
	{
		sum[i + len[0]] = arr[1][i];
	}

	cout << sum;

	return 0;
}
