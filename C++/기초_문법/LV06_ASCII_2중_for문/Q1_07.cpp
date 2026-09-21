#include <iostream>

int main()
{
	int num;
	std::cin >> num;

	for (int j = 0; j < num; j++)
	{
		for (int i = 0; i < 4; i++)
		{
			std::cout << "#";
		}
		std::cout << std::endl;
	}

	return 0;
}
