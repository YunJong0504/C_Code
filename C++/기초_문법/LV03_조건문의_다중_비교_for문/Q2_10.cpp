#include <iostream>

int main()
{
	int a;
	std::cin >> a;

	int b = 1;

	for (int i = 0; i < a; i++)
	{
		std::cout << b << " ";
		b = b + 2;
	}

	return 0;
}
