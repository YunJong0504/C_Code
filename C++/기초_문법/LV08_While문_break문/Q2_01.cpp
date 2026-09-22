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
		if (arr[i] < 5)
			std::cout << i << "번은 " << arr[i] << "점 불합격" << std::endl;
		else
			std::cout << i << "번은 " << arr[i] << "점 합격" << std::endl;
	}

	return 0;
}
