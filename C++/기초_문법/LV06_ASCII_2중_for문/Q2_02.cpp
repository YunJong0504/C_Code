#include <iostream>

int main()
{
	char ch;
	std::cin >> ch;

	for (char x = ch; x >= 'a'; x--)
	{
		std::cout << x;
	}

	return 0;
}
