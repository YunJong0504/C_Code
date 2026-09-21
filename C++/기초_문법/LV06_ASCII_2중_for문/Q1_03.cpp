#include <iostream>

int main()
{
	int num;
	std::cin >> num;

	for (int j = 0; j < num; j++)
	{
		for (int i = 1; i <= 5; i++)
		{
			std::cout << i << " ";
		}
		std::cout << std::endl;
	}

	return 0;
}
