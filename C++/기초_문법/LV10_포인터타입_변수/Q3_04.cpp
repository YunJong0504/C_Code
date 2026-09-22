#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	int arr[3][4] = {};

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			if (y == 0)
			{
				arr[y][x] = a;
				a++;
			}
			else if (y == 1)
			{
				arr[y][x] = b;
				b++;
			}
			else if (y == 2)
			{
				arr[y][x] = c;
				c++;
			}
		}
	}

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			cout << arr[y][x] << " ";
		}
		cout << endl;
	}

	return 0;
}
