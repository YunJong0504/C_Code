#include <iostream>

int main()
{
	int a, b;
	std::cin >> a >> b;

	if (a > b)
	{
		std::cout << "a가b보다크다";
	}
	else
	{
		std::cout << "b가a보다같거나크다";
	}

	return 0;
}
