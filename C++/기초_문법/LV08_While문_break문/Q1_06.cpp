#include <iostream>

int num = 0;
int arr[3][4] = {};

void input()
{
	std::cin >> num;
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			arr[y][x] = num;
			num++;
		}
	}
}

void process()
{
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			arr[y][x] += 1;
		}
	}
}

void output()
{
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			std::cout << arr[y][x] << " ";
		}
		std::cout << std::endl;
	}
}

int main()
{
	input();
	process();
	output();

	return 0;
}
