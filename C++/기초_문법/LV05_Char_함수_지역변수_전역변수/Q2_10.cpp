#include <iostream>

int main()
{
	int arr[6] = {};
	int num;
	std::cin >> num;

	int mul = 1;
	for (int i = 0; i < 6; i++)
	{
		arr[i] = (num * mul);
		mul++;
	}
	for (int i = 0; i < 6; i++)
	{
		std::cout << arr[i] << " ";
	}

	return 0;
}
