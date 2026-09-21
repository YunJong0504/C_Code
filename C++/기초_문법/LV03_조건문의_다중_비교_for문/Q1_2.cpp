#include <iostream>

int main()
{
	int a, b;
	std::cin >> a >> b;

	if (a > b)
	{
		std::cout << "큰수는 " << a;
	}
	else if (b > a)
	{
		std::cout << "큰수는 " << b;
	}
	else
	{
		std::cout << "같은숫자";
	}

	return 0;
}
