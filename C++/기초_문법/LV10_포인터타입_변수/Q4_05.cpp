#include <iostream>
using namespace std;

int main()
{
	int arr[2][3] = {};
	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			cin >> arr[y][x];
		}
	}
	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			if (arr[y][x] == 0)
				cout << "#";
			else
				cout << arr[y][x];
		}
		cout << endl;
	}

	return 0;
}
