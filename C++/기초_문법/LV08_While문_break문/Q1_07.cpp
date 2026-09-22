#include <iostream>

char arr1[5] = { 'B','D','5','Q','A' };
char arr2[5] = { 'Q','E','R','E','F' };
char ch;

void input()
{
	std::cin >> ch;
}

void output()
{
	if (ch >= 'a' && ch <= 'z')
	{
		for (int i = 0; i < 5; i++)
		{
			std::cout << arr1[i];
		}
	}
	else if (ch >= 'A' && ch <= 'Z')
	{
		for (int i = 0; i < 5; i++)
		{
			std::cout << arr2[i];
		}
	}
	else
		for (char x = 'H'; x >= 'A'; x--)
		{
			std::cout << x;
		}
}

int main()
{
	input();
	output();

	return 0;
}
