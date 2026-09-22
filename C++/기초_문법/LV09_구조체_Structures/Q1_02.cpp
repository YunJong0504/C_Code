#include <iostream>

int main()
{
	char arr[3][5] = 
	{
		{'A','B','C','D','E'},
		{'E','A','B','A','B'},
		{'A','C','D','E','R'}
	};
	char ch;
	std::cin >> ch;
	int count = 0;

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 5; x++)
		{
			if (arr[y][x] == ch)
				count++;
		}
	}

	if (count >= 3)
		std::cout << "대발견";
	else if (count <= 2 && count >= 1)
		std::cout << "발견";
	else
		std::cout << "미발견";

	return 0;
}
