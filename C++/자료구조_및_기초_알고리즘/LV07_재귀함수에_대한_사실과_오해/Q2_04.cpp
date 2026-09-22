#include <iostream>
using namespace std;

void input(int arr[4][4])
{
	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++) 
		{
			cin >> arr[y][x];
		}
	}
}

int main()
{
	int bit1[4][4] = {};
	int bit2[4][4] = {};
	input(bit1);
	input(bit2);

	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			if (bit1[y][x] != bit2[y][x])
			{
				cout << "걸리다";
				return 0;
			}
		}
	}
	cout << "걸리지않는다";

	return 0;
}
