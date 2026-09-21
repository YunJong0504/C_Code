#include <iostream>

int main()
{
	int arr[2][3] = { {3,1,1},{2,3,2} };

	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			std::cout << arr[y][x];
		}
	}

	return 0;
}
