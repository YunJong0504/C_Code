#include <iostream>

int num = 0;
int arr[3][3] = {};

void input()
{
	std::cin >> num;
}

void process()
{
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			arr[y][x] = num;
			num++;
		}
	}
}

void output()
{
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
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
