#include <iostream>
#include <queue>
using namespace std;

int arr[3][3];

int main()
{
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			cin >> arr[y][x];
		}
	}

	for (int i = 0; i < 3; i++)
	{
		int now = arr[i][0];
		bool isSame = true;
		for (int j = 1; j < 3; j++)
		{
			if (now != arr[i][j])
			{
				isSame = false;
				continue;
			}
		}

		if (isSame)
		{
			cout << now << endl;
		}
		else
		{
			cout << "x" << endl;
		}
	}

	return 0;
}
