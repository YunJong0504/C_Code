#include <iostream>
using namespace std;

void SUMMask(int a[4][4], int b[4][4], int c[4][4])
{
	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			if (a[y][x] == 1 || b[y][x] == 1)
			{
				c[y][x] = 1;
			}
		}
	}
}
void Find0(int arr[4][4])
{
	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			if (arr[y][x] == 0)
			{
				cout << "(" << y << "," << x << ")" << endl;
			}
		}
	}
}

int main()
{
	int mask1[4][4] = {
		{0,0,0,1},
		{1,1,0,1},
		{1,0,0,1},
		{1,1,1,1}
	};
	int mask2[4][4] = {
		{1,1,1,1},
		{1,0,1,1},
		{1,0,0,0},
		{1,0,0,0}
	};
	int mask3[4][4] = {};

	SUMMask(mask1, mask2, mask3);
	Find0(mask3);

	return 0;
}
