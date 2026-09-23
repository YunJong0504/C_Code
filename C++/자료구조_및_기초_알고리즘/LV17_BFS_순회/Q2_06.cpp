#include <iostream>
#include <queue>
using namespace std;

int main()
{
	int wheel[3][4] =
	{
		3,2,5,3,
		7,6,1,6,
		4,9,2,7
	};

	int num[4] = {};
	for (int i = 0; i < 4; i++)
	{
		std::cin >> num[i];
	}

	for (int x = 0; x < 4; x++)
	{
		for (int y = 0; y < num[x]; y++)
		{
			int temp = wheel[2][x];

			wheel[2][x] = wheel[1][x];
			wheel[1][x] = wheel[0][x];
			wheel[0][x] = temp;
		}
	}

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			cout << wheel[y][x] << " ";
		}
		cout << endl;
	}

	return 0;
}
