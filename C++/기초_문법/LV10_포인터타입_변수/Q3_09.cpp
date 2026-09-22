#include <iostream>
using namespace std;

void run(int a)
{
	int arr[3][3] = {};
	int b = 1;
	if (a < 10)
	{
		for (int y = 0; y < 3; y++)
		{
			for (int x = 0; x < 3; x++)
			{
				arr[y][x] = b;
				b++;
			}
		}
		for (int y = 0; y < 3; y++)
		{
			for (int x = 0; x < 3; x++)
			{
				cout << arr[y][x];
			}
			cout << endl;
		}
	}
	else if (a >= 10)
	{
		for (int y = 0; y < 3; y++)
		{
			for (int x = 2; x >= 0; x--)
			{
				arr[y][x] = b;
				b++;
			}
		}
		for (int y = 0; y < 3; y++)
		{
			for (int x = 0; x < 3; x++)
			{
				cout << arr[y][x];
			}
			cout << endl;
		}
	}
}

int main()
{
	int num;
	cin >> num;

	run(num);

	return 0;
}
