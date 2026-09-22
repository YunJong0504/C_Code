#include <iostream>
#include <cstring>
using namespace std;

int arr[4][5][3] =
{
	{
		0,1,0,
		1,0,1,
		1,1,1,
		1,0,1,
		1,0,1
	},
	{
		1,1,1,
		1,0,1,
		1,1,1,
		1,0,1,
		1,1,1
	},
	{
		1,1,1,
		1,0,1,
		1,0,0,
		1,0,1,
		1,1,1
	},
	{
		1,1,0,
		1,0,1,
		1,0,1,
		1,0,1,
		1,1,0
	}
};

int main()
{
	int a;
	cin >> a;

	for (int y = 0; y < 5; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			if (arr[a][y][x] == 0)
				cout << " ";
			else
				cout << "#";
		}
		cout << endl;
	}

	return 0;
}
