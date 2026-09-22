#include <iostream>

int main()
{
	int arr[6][3] = {};
	int a, b;
	std::cin >> a >> b;

	for (int y = 0; y < 6; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			if (y < 3)
				arr[y][x] = a;
			else
				arr[y][x] = b;
		}
	}

	for (int y = 0; y < 6; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			std::cout << arr[y][x];
		}
		std::cout << std::endl;
	}

	return 0;
}
