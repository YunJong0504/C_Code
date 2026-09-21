#include <iostream>

int num = 0;

void KFC()
{
	std::cin >> num;
}

void BBQ()
{
	if (num > 5)
	{
		std::cout << "만세";
	}
	else
	{
		std::cout << "다시";
	}
}

int main()
{
	KFC();
	BBQ();

	return 0;
}
