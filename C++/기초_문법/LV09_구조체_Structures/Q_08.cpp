#include <iostream>

void BBQ(int c, int d)
{
	std::cout << "합:" << c + d << std::endl;
	std::cout << "차:" << c - d << std::endl;
	std::cout << "곱:" << c * d << std::endl;
	std::cout << "몫" << c / d << std::endl;
}

int main()
{
	int a, b;
	std::cin >> a >> b;

	BBQ(a, b);

	return 0;
}
