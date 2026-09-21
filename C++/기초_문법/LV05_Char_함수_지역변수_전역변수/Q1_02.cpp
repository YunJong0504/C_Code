#include <iostream>

int main()
{
	int arr[4] = {};

	for (int i = 0; i < 4; i++)
	{
		std::cin >> arr[i];
	}

	int num = 0;
	for (int i = 0; i < 4; i++)
	{
		num += arr[i];
	}

	std::cout << num;

	return 0;
}
