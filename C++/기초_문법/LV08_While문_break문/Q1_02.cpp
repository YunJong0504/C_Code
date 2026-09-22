#include <iostream>

int main()
{
	int arr[6] = {};
	for (int i = 0; i < 6; i++)
	{
		std::cin >> arr[i];
	}

	for (int i = 0; i < 6; i++)
	{
		if (arr[i] == 7)
			break;
		else
			std::cout << arr[i] << " ";
	}

	return 0;
}
