#include <iostream>

int main()
{
	int a;
	std::cin >> a;

	for (int i = a; i >= 0; i--)
	{
		std::cout << i << std::endl;
	}

	std::cout << "발사";

	return 0;
}
