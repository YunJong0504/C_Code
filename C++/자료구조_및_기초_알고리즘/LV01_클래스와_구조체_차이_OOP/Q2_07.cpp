#include <iostream>
using namespace std;

void Change(int a, int b, int c, int arr[7][4])
{
	for (int i = 0; i < 4; i++)
	{
		arr[a][i] = 0;
	}
	for (int i = 0; i < 4; i++)
	{
		arr[b][i] = 0;
	}
	for (int i = 0; i < 4; i++)
	{
		arr[c][i] = 0;
	}
}

int main()
{
	int arr[7][4] = {};
	int num = 1;

	for (int y = 0; y < 7; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			arr[y][x] = num;
			num++;
		}
	}
	int a, b, c;
	cin >> a >> b >> c;

	Change(a, b, c, arr);

	for (int y = 0; y < 7; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			cout << arr[y][x] << " ";
		}
		cout << endl;
	}

	return 0;
}
