#include <iostream>
using namespace std;

int arr[3][3] = { {3,1,9},{7,2,1},{1,0,8} };

void Input(int vect[3][3])
{
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			cin >> vect[y][x];
		}
	}
}
void Masking(int vect[3][3])
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
void Output()
{
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			if (arr[y][x] >= 3 && arr[y][x] <= 5)
			{
				cout << "발견";
				return;
			}
		}
	}
	cout << "미발견";
}

int main()
{
	int bit[3][3] = {};
	Input(bit);
	Masking(bit);
	Output();

	return 0;
}
