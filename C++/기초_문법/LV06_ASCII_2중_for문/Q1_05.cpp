#include <iostream>

int main()
{
	char arr[4] = { 'B','T','K','A' };
	int num;
	std::cin >> num;

	for (int j = 0; j < num; j++)
	{
		for (int i = 0; i < 4; i++)
		{
			std::cout << arr[i] << " ";
		}
		std::cout << std::endl;
	}

	return 0;
}
