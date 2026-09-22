#include <iostream>
using namespace std;

int input[4] = {};
int arr[4][4] = {};

int main()
{
	for (int i = 0; i < 4; i++)
	{
		cin >> input[i];
	}
	int count = 1;

	for (int i = 0; i < 4; i++)
	{
		int y = (input[i] - 1) / 4;
		int x = (input[i] - 1) % 4;

		arr[y][x] = count;
		count++;
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
