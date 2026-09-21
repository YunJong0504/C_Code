#include <iostream>

int main()
{
	int arr[10] = { 5,25,54,2,-33,57,82,-8,13,1 };

	int index;
	std::cin >> index;

	for (int i = index; i < 10; i++)
	{
		std::cout << arr[i] << std::endl;
	}

	return 0;
}
