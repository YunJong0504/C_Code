#include <iostream>

int main()
{
	int arr[6][2] = {};
	for (int y = 0; y < 6; y++)
	{
		for (int x = 0; x < 2; x++)
		{
			std::cin >> arr[y][x];
		}
	}

	int temp;
	int count = 0;

	for (int i = 0; i < 6; i++)
	{
		if (arr[i][1] > arr[i][0])
		{
			temp = arr[i][1];
			arr[i][1] = arr[i][0];
			arr[i][0] = temp;
			count++;
		}
	}

	for (int y = 0; y < 6; y++)
	{
		for (int x = 0; x < 2; x++)
		{
			std::cout << arr[y][x] << " ";
		}
		std::cout << std::endl;
	}
	std::cout << count << "명";

	return 0;
}
