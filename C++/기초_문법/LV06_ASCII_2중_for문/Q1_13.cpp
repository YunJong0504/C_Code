#include <iostream>

int main()
{
	int a, b, c;
	std::cin >> a >> b >> c;

	for (int i = 0; i < c; i++)
	{
		for (int j = a; j <= b; j++)
		{
			std::cout << j << " ";
		}
		std::cout << std::endl;
	}

	return 0;
}
