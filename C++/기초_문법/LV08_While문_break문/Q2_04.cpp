#include <iostream>

char arr[17] = {};

void input()
{
	char a, b, c;
	std::cin >> a >> b >> c;
	for (int i = 0; i < 7; i++)
		arr[i] = a;
	for (int i = 7; i < 13; i++)
		arr[i] = b;
	for (int i = 13; i < 17; i++)
		arr[i] = c;
}

int main()
{
	input();

	for (int i = 16; i >= 0; i--)
	{
		std::cout << arr[i];
	}

	return 0;
}
