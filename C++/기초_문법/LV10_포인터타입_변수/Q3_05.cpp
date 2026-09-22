#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	int arr[6][3] = {};

	for (int x = 0; x < 3; x++)
	{
		for (int y = 0; y < 6; y++)
		{
			arr[y][x] = a;
			a++;
		}
	}

	int idx1, idx2;
	cin >> idx1 >> idx2;

	for (int y = 0; y < 6; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			if (y >= idx1 && y <= idx2)
			{
				arr[y][x] = 7;
			}
		}
	}
	for (int y = 0; y < 6; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			cout << arr[y][x] << " ";
		}
		cout << endl;
	}

	return 0;
}
