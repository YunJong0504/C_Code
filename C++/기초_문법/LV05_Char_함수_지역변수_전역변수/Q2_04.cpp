#include <iostream>

int arr[5] = {};

void KFC()
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << arr[i];
	}
}

int main()
{
	int num;
	std::cin >> num;

	for (int i = 0; i < 5; i++)
	{
		arr[i] = num;
		num--;
	}

	KFC();

	return 0;
}
