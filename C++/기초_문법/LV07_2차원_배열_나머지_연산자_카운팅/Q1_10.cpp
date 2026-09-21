#include <iostream>

char arr[4][4] = {};

void input(char c)
{
	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			arr[y][x] = c;
		}
	}

}

void output()
{
	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			std::cout << arr[y][x];
		}
		std::cout << std::endl;
	}
}

int main()
{
	char ch;
	std::cin >> ch;

	input(ch);
	output();

	return 0;
}
