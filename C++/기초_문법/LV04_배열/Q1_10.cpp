#include <iostream>

int main()
{
	int arr[6] = {};

	int num;
	std::cin >> num;

	for (int i = 0; i < 6; i++)
	{
		arr[i] = num;
		num--;
	}

	std::cout << arr[2];

	return 0;
}
