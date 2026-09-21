#include <iostream>

int main()
{
	int arr[2][4] = {};
	int y, x;
	std::cin >> y >> x;

	arr[y][x] = 1;

	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			std::cout << arr[y][x] << " ";
		}
		std::cout << std::endl;
	}

	return 0;
}
