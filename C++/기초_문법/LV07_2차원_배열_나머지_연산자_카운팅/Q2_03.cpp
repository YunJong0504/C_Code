#include <iostream>

char ch1, ch2;

void input()
{
	std::cin >> ch1 >> ch2;
}

void output()
{
	if (ch1 >= 'A' && ch1 <= 'Z' && ch2 >= 'A' && ch2 <= 'Z')
		std::cout << "대문자들";
	else if (ch1 >= 'a' && ch1 <= 'z' && ch2 >= 'a' && ch2 <= 'z')
	{
		for (char x = 'a'; x <= 'z'; x++)
			std::cout << x;
	}
	else
		std::cout << "대소문자";
}

int main()
{
	input();
	output();

	return 0;
}
