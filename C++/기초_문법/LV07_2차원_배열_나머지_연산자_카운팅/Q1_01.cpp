#include <iostream>

int main()
{
	int arr1[5] = { 3,5,2,4,1 };
	int arr2[3][2] = { { 9,8 }, { 7,1 }, { 3,4 } };

	int num;
	std::cin >> num;

	if (num % 2 == 0)
	{
		for (int y = 0; y < 3; y++)
		{
			for (int x = 0; x < 2; x++)
			{
				std::cout << arr2[y][x] << " ";
			}
			std::cout << std::endl;
		}
	}
	else if (num % 2 == 1)
	{
		for (int i = 0; i < 5; i++)
		{
			std::cout << arr1[i] << " ";
		}
	}

	return 0;
}
