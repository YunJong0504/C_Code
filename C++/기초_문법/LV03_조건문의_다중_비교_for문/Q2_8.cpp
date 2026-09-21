#include <iostream>

int main()
{
	int a, b, c;
	std::cin >> a >> b >> c;

	for (int i = a; i <= b; i++)
	{
		std::cout << i << " ";
	}
	
	std::cout << std::endl;

	for (int i = a; i <= c; i++)
	{
		std::cout << i << " ";
	}

	return 0;
}
