#include <iostream>

int main()
{
	int a, b;
	std::cin >> a >> b;

	if (30 < (a * b) && (a * b) < 50)
	{
		std::cout << "적당한 사이즈";
	}
	else if ((a * b) >= 50)
	{
		std::cout << "큰 사이즈";
	}
	else if ((a * b) <= 30)
	{
		std::cout << "작은 사이즈";
	}

	return 0;
}
