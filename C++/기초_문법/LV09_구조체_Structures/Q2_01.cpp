#include <iostream>

int main()
{
	int arr1[5] = { 2,1,2,4,5 };
	int arr2[3][3] = { {2,5,3},{4,5,7},{8,7,2} };
	int num;
	int count = 0;
	std::cin >> num;

	for (int i = 0; i < 5; i++)
	{
		if (arr1[i] == num)
			count++;
	}
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			if (arr2[y][x] == num)
				count++;
		}
	}
	std::cout << count;

	return 0;
}
