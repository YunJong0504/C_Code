#include <iostream>
using namespace std;

int main()
{
	int arr[3][4] = {};
	int num = 1;

	for (int y = 2; y >= 0; y--)
	{
		for (int x = 3; x >= 0; x--)
		{
			arr[y][x] = num;
			num++;
		}
	}

	int a;
	cin >> a;

	for (int y = 0; y < 3; y++)
	{
		arr[y][a] = 0;
	}

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			cout << arr[y][x] << " ";
		}
		cout << endl;
	}

	return 0;
}
