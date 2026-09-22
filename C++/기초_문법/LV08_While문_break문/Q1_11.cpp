#include <iostream>

void starBox()
{
	for (int i = 1; i <= 20; i += 2)
	{
		std::cout << i << " ";
	}
}

void macDoll()
{
	for (char x = 'H'; x >= 'A'; x--)
	{
		std::cout << x << " ";
	}
}

void copyBean()
{
	for (int i = -5; i < 6; i++)
	{
		std::cout << i << " ";
	}
}

int main()
{
	int price;
	std::cin >> price;

	if (price >= 3500 && price < 5000)
		starBox();
	else if (price >= 2500 && price < 3500)
		macDoll();
	else
		copyBean();

	return 0;
}
