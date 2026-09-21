#include <iostream>

int main()
{
	int arr1[5] = {};
	int arr2[5] = {};

	for (int i = 0; i < 5; i++)
	{
		std::cin >> arr1[i];
		arr2[i] = arr1[i];
	}

	for (int i = 0; i < 5; i++)
	{
		std::cout << arr1[i] << " ";
	}

	std::cout << std::endl;

	for (int i = 0; i < 5; i++)
	{
		std::cout << arr2[i] << " ";
	}

	return 0;
}
