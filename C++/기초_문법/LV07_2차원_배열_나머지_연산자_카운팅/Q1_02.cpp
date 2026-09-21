#include <iostream>

int main()
{
	int a, b;
	std::cin >> a >> b;

	if (a > b)
	{
		if ((a - b) % 2 == 0)
			std::cout << "짝사랑만";
		else
			std::cout << "고백한다";
	}
	else if (b > a)
	{
		if ((b - a) % 2 == 0)
			std::cout << "짝사랑만";
		else
			std::cout << "고백한다";
	}
	else
		std::cout << "짝사랑만";

	return 0;
}
