#include <iostream>

int main()
{
	int num;
	std::cin >> num;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			std::cout << num;
		}
		std::cout << std::endl;
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << num;
		}
		std::cout << std::endl;
	}

	return 0;
}
