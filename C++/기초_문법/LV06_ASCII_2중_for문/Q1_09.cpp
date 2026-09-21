#include <iostream>

int main()
{
	char ch;
	std::cin >> ch;

	for (char x = 'A'; x <= ch; x++)
	{
		std::cout << x;
	}

	return 0;
}
