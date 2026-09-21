#include <iostream>

int main()
{
	int arr[3][2] = {};
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 2; x++)
		{
			std::cin >> arr[y][x];
			arr[y][x] += 2;
		}
	}
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 2; x++)
		{
			std::cout << arr[y][x] << " ";
		}
		std::cout << std::endl;
	}

	return 0;
}
