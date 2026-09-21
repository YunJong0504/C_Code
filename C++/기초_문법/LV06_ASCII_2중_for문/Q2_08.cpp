#include <iostream>

int main()
{
	char arr1[5] = {};
	char arr2[5] = {};
	char ch;
	std::cin >> ch;

	char ch1 = ch;
	char ch2 = ch;

	for (int i = 0; i < 5; i++)
	{
		arr1[i] = ch1;
		ch1++;
	}

	for (int i = 0; i < 5; i++)
	{
		arr2[i] = ch2;
		ch2--;
	}

	for (int i = 0; i < 5; i++)
	{
		std::cout << arr1[i];
	}
	std::cout << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout << arr2[i];
	}

	return 0;
}
