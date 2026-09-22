#include <iostream>

int main()
{
	char arr[3][6] = {};
	char a, b;
	std::cin >> a >> b;

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 6; x++)
		{
			if (x >= 4)
				arr[y][x] = b;
			else
				arr[y][x] = a;
		}
	}

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 6; x++)
		{
			std::cout << arr[y][x];
		}
		std::cout << std::endl;
	}

	return 0;
}
