#include <iostream>
using namespace std;

int main()
{
	int arr[4][4] = {};
	int num = 1;

	for (int x = 3; x >= 0; x--)
	{
		for (int y = 0; y < 4; y++)
		{
			arr[y][x] = num;
			num++;
		}
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
