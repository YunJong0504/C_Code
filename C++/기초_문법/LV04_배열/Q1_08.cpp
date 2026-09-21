#include <iostream>

int main()
{
	int num;
	std::cin >> num;

	if (num > 5)
	{
		for (int i = 1; i <= 10; i++)
		{
			std::cout << i << std::endl;
		}
	}
	else
	{
		for (int i = 5; i >= 1; i--)
		{
			std::cout << i << std::endl;
		}
	}

	return 0;
}
