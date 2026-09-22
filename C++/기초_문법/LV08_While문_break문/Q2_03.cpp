#include <iostream>

int main()
{
	char arr[5] = {};
	int n;
	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}

	for (int i = 0; i < n; i++)
	{
		std::cout << arr[i];
	}

	return 0;
}
