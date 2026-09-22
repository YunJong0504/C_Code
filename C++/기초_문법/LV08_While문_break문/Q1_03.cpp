#include <iostream>

int a, b;

void input()
{
	std::cin >> a >> b;
}

void output()
{
	int x = 5;
	while (x <= (a + b))
	{
		std::cout << x << " ";
		x++;
	}
}

int main()
{
	input();
	output();

	return 0;
}
