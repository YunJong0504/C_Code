#include <iostream>

int main()
{
	int a;
	std::cin >> a;

	for (int i = (a + 2); i <= (a + 4); i++)
	{
		std::cout << i << " ";
	}

	return 0;
}
