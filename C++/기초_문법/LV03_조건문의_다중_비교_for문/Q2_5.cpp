#include <iostream>

int main()
{
	int a, b, c;
	std::cin >> a >> b >> c;

	if (a >= b && a >= c)
	{
		std::cout << "MAX발견";
	}
	else
	{
		std::cout << "MAX아님";
	}

	return 0;
}
