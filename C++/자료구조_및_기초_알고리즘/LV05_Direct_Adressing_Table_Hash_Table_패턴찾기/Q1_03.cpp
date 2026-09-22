#include <iostream>
using namespace std;

void Input(int arr[3][3])
{
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			cin >> arr[y][x];
		}
	}
}

int main()
{
	int arr[3][3] = {};
	Input(arr);

	int idx[10] = {};
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			idx[arr[y][x]]++;
		}
	}

	for (int i = 1; i < 10; i++)
	{
		if (idx[i] == 0)
		{
			cout << i << " ";
		}
	}

	return 0;
}
