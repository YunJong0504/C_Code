#include <iostream>

int main()
{
	int arr[3][3] = { {3,5,14},{2,3,9},{6,2,7} };
	int num;
	std::cin >> num;
	int count = 0;

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			if ((arr[y][x] % num) == 0)
			{
				count++;
			}
		}
	}

	std::cout << count;

	return 0;
}
