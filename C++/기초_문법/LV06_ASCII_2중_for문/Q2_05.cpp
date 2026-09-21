#include <iostream>

int main()
{
	int arr[3] = {};
	int sum = 0;

	for (int i = 0; i < 3; i++)
	{
		std::cin >> arr[i];
		sum += arr[i];
	}

	for (int i = 0; i < sum; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << arr[j] << " ";
		}
		std::cout << std::endl;
	}
	
	return 0;
}
