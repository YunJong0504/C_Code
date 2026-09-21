#include <iostream>

int main()
{
	int arr[5] = {};
	int a, b;
	std::cin >> a >> b;

	for (int i = 0; i < 5; i++)
	{
		arr[i] = a;
		a += b;
	}
	for (int i = 0; i < 5; i++)
	{
		std::cout << arr[i] << " ";
	}

	return 0;
}
