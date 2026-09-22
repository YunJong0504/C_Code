#include <iostream>

int main()
{
	int arr[3][3] = {};
	int y, x, num;
	std::cin >> y >> x >> num;
	
	arr[y][x] = num;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}

	return 0;
}
