#include <iostream>

char arr[3] = { 'A','B','C' };

void KFC()
{
	for (int i = 0; i < 3; i++)
	{
		std::cout << arr[i];
	}
	std::cout << std::endl;
}

int main()
{
	int num;
	std::cin >> num;

	for (int i = 0; i < num; i++)
	{
		KFC();
	}

	return 0;
}
