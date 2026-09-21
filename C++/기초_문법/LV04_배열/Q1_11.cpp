#include <iostream>

int main()
{
	int arr[4] = {};

	for (int i = 0; i < 4; i++)
	{
		std::cin >> arr[i];
	}

	int sum = 0;
	for (int i = 0; i < 4; i++)
	{
		sum += arr[i];
	}

	std::cout << sum;

	return 0;
}
