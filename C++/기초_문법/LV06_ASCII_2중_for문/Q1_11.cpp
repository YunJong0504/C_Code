#include <iostream>

int main()
{
	char ch1, ch2;
	std::cin >> ch1 >> ch2;

	for (int i = 0; i < 4; i++)
	{
		for (char x = ch1; x <= ch2; x++)
		{
			std::cout << x << " ";
		}
		std::cout << std::endl;
	}

	return 0;
}
