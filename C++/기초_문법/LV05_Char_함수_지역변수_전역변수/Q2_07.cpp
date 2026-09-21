#include <iostream>

int main()
{
	int arr[4] = {};
	int num;
	std::cin >> num;

	for (int i = 0; i < 4; i++)
	{
		arr[i] = num;
		num--;
	}

	for (int i = 0; i < 4; i++)
	{
		std::cout << arr[i] << " ";
	}

	return 0;
}
