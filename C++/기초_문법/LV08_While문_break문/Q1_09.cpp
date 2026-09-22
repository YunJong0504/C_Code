#include <iostream>

int arr[2][3] = {};
int sum = 0;

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

void process()
{
	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			sum += arr[y][x];
		}
	}
}

void output()
{
	std::cout << sum;
}

int main()
{
	input();
	process();
	output();

	return 0;
}
