#include <iostream>

int main()
{
	int input;
	std::cin >> input;

	if (input > 3)
	{
		input++;
		std::cout << input;
	}
	else
	{
		input--;
		std::cout << input;
	}

	return 0;
}
