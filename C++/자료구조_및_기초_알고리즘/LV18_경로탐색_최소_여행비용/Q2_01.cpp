#include <iostream>
#include <queue>
using namespace std;

int watch[3][3] =
{
	0,12,0,
	9,0,3,
	0,6,0,
};

void swap()
{
	int temp = watch[0][1];
	watch[0][1] = watch[1][0];
	watch[1][0] = watch[2][1];
	watch[2][1] = watch[1][2];
	watch[1][2] = temp;
}

int main()
{
	int num;
	cin >> num;

	int time = num / 90;

	for (int i = 0; i < time; i++)
	{
		swap();
	}

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			if (watch[y][x] != 0)
				std::cout << watch[y][x] << " ";
		}
	}

	return 0;
}
