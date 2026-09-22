#include <iostream>

char arr[2][3] = { {'F','E','W'},{'D','C','A'} };

void findCh(char a)
{
	int count = 0;
	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			if (arr[y][x] == a)
				count++;
		}
	}
	if (count == 0)
		std::cout << "미발견";
	else
		std::cout << "발견";
}

int main()
{
	char ch;
	std::cin >> ch;

	findCh(ch);

	return 0;
}
