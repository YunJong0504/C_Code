#include <iostream>

int main()
{
	int num;
	std::cin >> num;

	if (num > 0)
	{
		std::cout << "###\n";
		std::cout << "###\n";
		std::cout << "###\n";
	}
	else if (num < 0)
	{
		std::cout << "$$$\n";
		std::cout << "$$$\n";
	}
	else
	{
		std::cout << "";
	}

	return 0;
}
