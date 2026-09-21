#include <iostream>

int main()
{
	int a, x;
	std::cin >> a >> x;

	for (int i = (a - 1); i >= (a - x); i--)
	{
		std::cout << i << " ";
	}

	return 0;
}
