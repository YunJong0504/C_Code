#include <iostream>

int main()
{
	int arr[3][3] = { {10,3,20},{60,30,40},{20,30,40} };
	int a, b;
	std::cin >> a >> b;
	int count = 0;

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			if (arr[y][x] >= a && arr[y][x] <= b)
			{
				count++;
			}
		}
	}
	std::cout << count;

	return 0;
}
