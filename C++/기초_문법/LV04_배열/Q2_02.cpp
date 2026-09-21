#include <iostream>

int main()
{
	int num;
	std::cin >> num;

	if (num != 3)
	{
		std::cout << "3이 아니다" << std::endl;
	}
	if (num != 5)
	{
		std::cout << "5가 아니다" << std::endl;
	}
	if (num > 1 && num < 10)
	{
		for (int i = 5; i > 0; i--)
		{
			std::cout << i << std::endl;
		}
	}

	return 0;
}
