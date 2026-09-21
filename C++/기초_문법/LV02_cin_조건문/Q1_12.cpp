#include <iostream>

int main()
{
	int a, b, c;
	std::cin >> a >> b >> c;

	if ((a + b + c) >= (a * b * c))
	{
		std::cout << "행운의 수";
	}
	else
	{
		std::cout << "소소한 수";
	}

	return 0;
}
