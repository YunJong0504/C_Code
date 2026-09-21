#include <iostream>

int main()
{
	char arr[3][5] = {};
	char ch;
	std::cin >> ch;

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 5; x++)
		{
			arr[y][x] = ch;
			ch++;
		}
	}

	std::cout << (char)(arr[2][2] + 32);

	return 0;
}
