#include <iostream>

int main()
{
	int arr[6] = {};
	int a, b;
	std::cin >> a >> b;

	for (int i = 0; i < 3; i++)
	{
		arr[i] = a;
		a++;
	}
	for (int i = 5; i >= 3; i--)
	{
		arr[i] = b;
		b--;
	}
	for (int i = 0; i < 6; i++)
	{
		std::cout << arr[i] << " ";
	}

	return 0;
}
