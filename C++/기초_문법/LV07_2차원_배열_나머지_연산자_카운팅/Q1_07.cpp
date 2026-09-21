#include <iostream>

int main()
{
	int a, b, c;
	std::cin >> a >> b >> c;

	int MAX = 0;
	int MIN = 0;

	if (a > b && a > c)
	{
		MAX = a;
		if (b < c)
		{
			MIN = b;
		}
		else
		{
			MIN = c;
		}
	}
	if (b > a && b > c)
	{
		MAX = b;
		if (a < c)
		{
			MIN = a;
		}
		else
		{
			MIN = c;
		}
	}
	if (c > b && c > a)
	{
		MAX = c;
		if (b < a)
		{
			MIN = b;
		}
		else
		{
			MIN = a;
		}
	}

	std::cout << "MAX=" << MAX << std::endl;
	std::cout << "MIN=" << MIN << std::endl;

	return 0;
}
