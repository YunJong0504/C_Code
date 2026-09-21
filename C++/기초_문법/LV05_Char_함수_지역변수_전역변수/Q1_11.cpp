#include <iostream>

int arr[6] = {};

void PrintAll()
{
	for (int i = 0; i < 6; i++)
	{
		std::cout << arr[i] << std::endl;
	}
}

int main()
{
	int num;
	std::cin >> num;

	for (int i = 0; i < 6; i++)
	{
		arr[i] = num;
		num++;
	}

	PrintAll();

	return 0;
}
