#include <iostream>

int main()
{
	int arr[5] = {};
	for (int i = 0; i < 5; i++)
	{
		std::cin >> arr[i];
	}

	for (int i = 0; i < 5; i++)
	{
		if (arr[i] >= 70)
		{
			std::cout << i + 1 << "번사람은" << arr[i] << "점PASS" << std::endl;
		}
		else if (arr[i] >= 50 && arr[i] < 70)
		{
			std::cout << i + 1 << "번사람은" << arr[i] << "점RETEST" << std::endl;
		}
		else
		{
			std::cout << i + 1 << "번사람은" << arr[i] << "점FAIL" << std::endl;
		}
	}

	return 0;
}
