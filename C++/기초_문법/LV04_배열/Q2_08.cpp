#include <iostream>

int main()
{
	int num;
	int arr[6] = {};
	
	std::cin >> num;

	for (int i = 0; i < 6; i++)
	{
		arr[i] = num;
		num++;
	}

	for (int i = 0; i < 6; i++)
	{
		std::cout << arr[i] << std::endl;
	}

	return 0;
}
