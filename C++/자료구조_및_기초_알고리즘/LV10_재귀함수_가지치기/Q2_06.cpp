#include <iostream>
#include <cstring>
using namespace std;

char arr1[4][4] = {
	{'A','B','C','D'},
	{'B','B','A','B'},
	{'C','B','A','C'},
	{'B','A','A','A'}
};
char arr2[4][4] = {};
int idx[100] = {};

int main()
{
	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			cin >> arr2[y][x];
		}
	}
	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			if (arr1[y][x] == arr2[y][x])
			{
				idx[arr1[y][x]]++;
			}
		}
	}
	int max = INT_MIN;
	int index = 0;
	for (int i = 0; i < 100; i++)
	{
		if (idx[i] > max)
		{
			max = idx[i];
			index = i;
		}
	}

	cout << (char)(index);

	return 0;
}
