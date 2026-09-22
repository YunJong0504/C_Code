#include <iostream>

void BBQ(int a)
{
	for (int i = 1; i <= a; i++)
	{
		std::cout << i;
	}
}

void KFC(char ch)
{
	for (int i = 0; i < 7; i++)
	{
		std::cout << ch;
	}
}

int main()
{
	int num;
	std::cin >> num;

	if (num % 2 == 1)
	{
		int a;
		std::cin >> a;
		BBQ(a);
	}
	else
	{
		char b;
		std::cin >> b;
		KFC(b);
	}

	return 0;
}
