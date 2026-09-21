#include <iostream>

int main()
{
	int arr[7] = {};

	for (int i = 0; i < 7; i++)
	{
		std::cin >> arr[i];
	}

	std::cout << arr[0] + arr[6];

	return 0;
}
