#include <iostream>

int main()
{
	int arr[6] = {};
	for (int i = 0; i < 6; i++)
	{
		std::cin >> arr[i];
	}

	for (int i = 5; i >= 0; i--)
	{
		std::cout << arr[i] << " ";
		if (arr[i] == 7)
			break;
	}

	return 0;
}
