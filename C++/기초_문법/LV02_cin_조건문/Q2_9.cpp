#include <iostream>

int main()
{
	int a, b;
	std::cin >> a >> b;

	int sum = a + b;
	int mul = a * b;

	if (sum > 10)
	{
		std::cout << "합만세" << std::endl;
	}
	
	if (mul > 10)
	{
		std::cout << "곱만세" << std::endl;
	}

	return 0;
}
