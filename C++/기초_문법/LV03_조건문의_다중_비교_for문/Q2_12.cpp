#include <iostream>

int main()
{
	int a;
	std::cin >> a;

	for (int i = 0; i < a; i++)
	{
		std::cout << "##" << std::endl;
		std::cout << "@@" << std::endl;
	}

	return 0;
}
