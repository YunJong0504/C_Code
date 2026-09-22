#include <iostream>

char arr[2][3] = {};
int count1, count2 = 0;

void input()
{
	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			std::cin >> arr[y][x];
		}
	}
}

void findUpper()
{
	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			if (arr[y][x] >= 'A' && arr[y][x] <= 'Z')
			{
				count1++;
			}
		}
	}
}

void findLower()
{
	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			if (arr[y][x] >= 'a' && arr[y][x] <= 'z')
			{
				count2++;
			}
		}
	}
}

int main()
{
	input();
	findUpper();
	findLower();

	std::cout << "대문자" << count1 << "개" << std::endl;
	std::cout << "소문자" << count2 << "개" << std::endl;

	return 0;
}
