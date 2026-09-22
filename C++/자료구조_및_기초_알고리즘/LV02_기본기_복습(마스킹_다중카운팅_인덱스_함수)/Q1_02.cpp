#include <iostream>
using namespace std;

int arr[3][3] = { {3,5,9},{4,2,1},{1,1,5} };

void masking(int vect[3][3])
{
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			if (vect[y][x] == 0)
			{
				arr[y][x] = 0;
			}
		}
	}
}

int Output()
{
	int sum = 0;
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			sum += arr[y][x];
		}
	}

	return sum;
}

int main()
{
	int bit[3][3] = {};
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			cin >> bit[y][x];
		}
	}

	masking(bit);
	int SUM = Output();
	cout << SUM;

	return 0;
}
