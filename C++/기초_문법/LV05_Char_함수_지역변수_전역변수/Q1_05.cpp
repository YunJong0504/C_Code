#include <iostream>

void LOT()
{
	std::cout << 12345 << std::endl;
}

int main()
{
	int num;
	std::cin >> num;

	for (int i = 0; i < num; i++)
	{
		LOT();
	}
	

	return 0;
}
