#include <iostream>

int main()
{
	char ch1;
	int num;
	std::cin >> ch1 >> num;

	for (int j = 0; j < num; j++)
	{
		for (int i = 0; i < num; i++)
		{
			std::cout << ch1;
		}
		std::cout << std::endl;
	}

	return 0;
}
