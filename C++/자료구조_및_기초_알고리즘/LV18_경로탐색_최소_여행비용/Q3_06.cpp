#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int y, x;
	cin >> y >> x;

	int arr[100][100];

	for (int i = 0; i < y; i++)
	{
		for (int j = 0; j < x; j++)
		{
			std::cin >> arr[i][j];
		}
	}

	for (int k = 0; k < 3; k++)
	{
		int max = -1;
		int maxY = 0;
		int maxX = 0;

		for (int i = 0; i < y; i++)
		{
			for (int j = 0; j < x; j++)
			{
				if (arr[i][j] > max)
				{
					max = arr[i][j];
					maxY = i;
					maxX = j;
				}
			}
		}

		std::cout << max << "(" << maxY << "," << maxX << ")" << std::endl;

		arr[maxY][maxX] = -1;
	}

	return 0;
}
