#include <iostream>

int arr1[5] = {};
int arr2[5] = {};

void PrintAll()
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << arr1[i];
	}
	std::cout << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout << arr2[i];
	}
}

int main()
{
	int a, b;
	std::cin >> a >> b;

	for (int i = 0; i < 5; i++)
	{
		arr1[i] = a;
	}
	for (int i = 0; i < 5; i++)
	{
		arr2[i] = b;
	}

	PrintAll();

	return 0;
}
