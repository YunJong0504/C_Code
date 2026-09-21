#include <iostream>

void KFC()
{
	std::cout << "KFC" << std::endl;
}

void BBQ()
{
	std::cout << "BBQ" << std::endl;
}

int main()
{
	char ch;
	std::cin >> ch;

	if (ch == 'B')
	{
		KFC();
		BBQ();
	}
	else if (ch == 'b')
	{
		BBQ();
	}
	else if (ch == '7')
	{
		KFC();
	}

	return 0;
}
