#include <iostream>
using namespace std;

int main()
{
	int arr[4][4] = {};

	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			cin >> arr[y][x];
		}
	}

	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			if (arr[y][x] % 2 == 0)
			{
				cout << "# ";
			}
			else
			{
				cout << "@ ";
			}
		}
		cout << endl;
	}

	return 0;
}
