#include <iostream>

int main()
{
	int arr[3][3] = { {3,4,1},{2,1,4},{3,3,0} };

	int even = 0;
	int odd = 0;

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			if (arr[y][x] % 2 == 0)
				even++;
			else
				odd++;
		}
	}

	std::cout << "짝수 : " << even << std::endl;
	std::cout << "홀수 : " << odd << std::endl;

	return 0;
}
