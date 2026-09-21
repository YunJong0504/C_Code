#include <iostream>

int main()
{
	int a, b;
	std::cin >> a >> b;

	if ((a - b) > 5)
	{
		std::cout << "멀다";
	}
	else
	{
		std::cout << "가깝다";
	}

	return 0;
}
