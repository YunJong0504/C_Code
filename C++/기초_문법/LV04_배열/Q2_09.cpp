#include <iostream>

int main()
{
	int arr[4] = {};

	int a, b;
	std::cin >> a >> b;

	arr[0] = a;
	arr[2] = b;

	for (int i = 0; i < 4; i++)
	{
		std::cout << arr[i];
	}

	return 0;
}
