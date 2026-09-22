#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;
	int arr[3][3] = {};
	int a = 1;

	if (num % 5 == 1)
	{
		for (int x = 2; x >= 0; x--)
		{
			for (int y = 2; y >= 0; y--)
			{
				arr[y][x] = a;
				a++;
			}
		}
	}
	else if (num % 5 == 2)
	{
		for (int y = 2; y >= 0; y--)
		{
			for (int x = 0; x < 3; x++)
			{
				arr[y][x] = a;
				a++;
			}
		}
	}
	else
	{
		int ten = 10;
		for (int x = 0; x < 3; x++)
		{
			for (int y = 0; y < 3; y++)
			{
				arr[y][x] = ten;
				ten++;
			}
		}
	}

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			cout << arr[y][x] << " ";
		}
		cout << endl;
	}

	return 0;

}
