#include <iostream>

int main()
{
	char input;
	std::cin >> input;

	int t = input - '0';

	t += 5;
	std::cout << t;

	return 0;
}
