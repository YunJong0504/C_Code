#include <iostream>
#include <cstring>
using namespace std;

char arr[2][2][3] =
{
	{
		{'A','T','B'},
		{'C','C','B'}
	},
	{
		{'A','A','A'},
		{'B','B','C'}
	}
};

int main()
{
	char ch;
	cin >> ch;

	for (int z = 0; z < 2; z++)
	{
		for (int y = 0; y < 2; y++)
		{
			for (int x = 0; x < 3; x++)
			{
				if (ch == arr[z][y][x])
				{
					cout << "발견";
					return 0;
				}
			}
		}
	}
	cout << "미발견";

	return 0;
}
