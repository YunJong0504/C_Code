#include <iostream>

int main()
{
	int arr[5] = {};

	int num;
	std::cin >> num;

	num += 5;

	for (int i = 0; i < 5; i++)
	{
		arr[i] = num;
	}

	for (int i = 0; i < 5; i++)
	{
		std::cout << arr[i] << " ";
	}

	return 0;
}
