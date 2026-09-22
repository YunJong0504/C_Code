#include <iostream>

int main()
{
	char ch1, ch2;
	int num;
	std::cin >> ch1 >> ch2 >> num;

	for (int i = 0; i < num; i++)
	{
		for (char x = ch1; x <= ch2; x++)
		{
			std::cout << x;
		}
		std::cout << std::endl;
	}

	return 0;
}
