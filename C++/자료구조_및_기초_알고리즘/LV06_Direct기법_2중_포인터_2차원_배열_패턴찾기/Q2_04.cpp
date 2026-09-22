#include <iostream>
using namespace std;

int arr[4][4] = {};

void Garo(int y)
{
	for (int i = 0; i < 4; i++)
	{
		arr[y][i] = 1;
	}
}
void Sero(int x)
{
	for (int i = 0; i < 4; i++)
	{
		arr[i][x] = 1;
	}
}

int main()
{
	for (int i = 0; i < 3; i++)
	{
		char ch;
		int a;
		cin >> ch >> a;
		if (ch == 'G')
			Garo(a);
		else if (ch == 'S')
			Sero(a);
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
