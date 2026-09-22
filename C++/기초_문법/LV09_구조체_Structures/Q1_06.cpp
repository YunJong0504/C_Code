#include <iostream>

int main()
{
	char arr[3][3] = {};
	int y1, y2, x1, x2;

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			std::cin >> arr[y][x];
		}
	}

	std::cin >> y1 >> x1 >> y2 >> x2;

	char temp;

	temp = arr[y1][x1];
	arr[y1][x1] = arr[y2][x2];
	arr[y2][x2] = temp;

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			std::cout << arr[y][x];
		}
		std::cout << std::endl;
	}

	return 0;
}
