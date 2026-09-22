#include <iostream>

int main()
{
	char arr[5][3] =
	{
		{'D','A','A'},
		{'B','C','D'},
		{'E','F','A'},
		{'A','A','D'},
		{'F','G','E'}
	};
	char ch;
	std::cin >> ch;
	
	for (int y = 0; y < 5; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			if (arr[y][x] == ch)
			{
				std::cout << "(" << y << "," << x << ")" << std::endl;
			}
		}
	}

	return 0;
}
