#include <iostream>
using namespace std;

int main()
{
	char arr[3][3] = { {'a','b','E'},{'E','2','W'},{'3','2','4'} };
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			if (arr[y][x] >= 'a' && arr[y][x] <= 'z')
				cout << (char)(arr[y][x] - 32);
			else if (arr[y][x] >= 'A' && arr[y][x] <= 'Z')
				cout << (char)(arr[y][x] + 32);
			else if (arr[y][x] >= '0' && arr[y][x] <= '9')
				cout << (char)(arr[y][x] + 5);
		}
		cout << endl;
	}

	return 0;
}
