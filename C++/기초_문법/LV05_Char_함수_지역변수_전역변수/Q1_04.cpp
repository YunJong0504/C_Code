#include <iostream>

void KFC()
{
	std::cout << "KFC입니다";
}

void MC()
{
	std::cout << "MC입니다";
}

int main()
{
	int num;
	std::cin >> num;

	if (num == 1)
	{
		KFC();
	}
	else
	{
		MC();
	}

	return 0;
}
