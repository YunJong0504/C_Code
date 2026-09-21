#include <iostream>

int main()
{
	int arr[5] = {};
	for (int i = 0; i < 5; i++)
	{
		std::cin >> arr[i];
	}

	int count = 0;

	for (int i = 0; i < 5; i++)
	{
		if (arr[i] >= 3 && arr[i] <= 7)
		{
			count++;
		}
	}

	std::cout << count;

	return 0;
}
