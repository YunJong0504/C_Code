#include <iostream>

int main()
{
	int a;
	std::cin >> a;

	for (int i = a; i <= (a + 2); i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << i;
		}
		std::cout << std::endl;
	}

	return 0;
}
