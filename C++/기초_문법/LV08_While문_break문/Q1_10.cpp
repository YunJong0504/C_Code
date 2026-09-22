#include <iostream>

int main()
{
	int arr[3][4] = { {4,3,1,1,},{3,1,2,1},{0,0,1,2} };
	int num;
	int count = 0;

	std::cin >> num;

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			if (arr[y][x] == num)
				count++;
		}
	}

	std::cout << count << "개 존재합니다";

	return 0;
}
