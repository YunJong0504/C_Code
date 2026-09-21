#include <iostream>

int main()
{
	int a, b, c, d;
	std::cin >> a >> b >> c >> d;

	int aver = (a + b + c + d) / 4;

	if (a < aver)
	{
		std::cout << a << "<" << aver << std::endl;
	}
	else if (a == aver)
	{
		std::cout << a << "==" << aver << std::endl;
	}
	else
	{
		std::cout << a << ">" << aver << std::endl;
	}

	if (b < aver)
	{
		std::cout << b << "<" << aver << std::endl;
	}
	else if (b == aver)
	{
		std::cout << b << "==" << aver << std::endl;
	}
	else
	{
		std::cout << b << ">" << aver << std::endl;
	}

	if (c < aver)
	{
		std::cout << c << "<" << aver << std::endl;
	}
	else if (c == aver)
	{
		std::cout << c << "==" << aver << std::endl;
	}
	else
	{
		std::cout << c << ">" << aver << std::endl;
	}

	if (d < aver)
	{
		std::cout << d << "<" << aver << std::endl;
	}
	else if (d == aver)
	{
		std::cout << d << "==" << aver << std::endl;
	}
	else
	{
		std::cout << d << ">" << aver << std::endl;
	}

	return 0;
}
