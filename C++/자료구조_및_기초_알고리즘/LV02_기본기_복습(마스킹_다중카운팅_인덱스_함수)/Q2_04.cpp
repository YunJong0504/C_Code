#include <iostream>
using namespace std;

int map[2][3] = { {3,55,42},{-5,-9,-10} };

void Input(int arr[2][2])
{
	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 2; x++)
		{
			cin >> arr[y][x];
		}
	}
}

void Output(int num)
{
	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			if (num == map[y][x])
			{
				cout << "Y ";
				return;
			}
		}
	}
	cout << "N ";
}

int main()
{
	int pix[2][2] = {};
	Input(pix);

	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 2; x++)
		{
			Output(pix[y][x]);
		}
		cout << endl;
	}

	return 0;
}
