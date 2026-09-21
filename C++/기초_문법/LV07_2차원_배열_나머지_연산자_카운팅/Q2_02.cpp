#include <iostream>

int main()
{
	int arr[6] = {};
	int a, b, c;
	std::cin >> a >> b >> c;
	arr[a] = 1;
	arr[b] = 1;
	arr[c] = 1;

	for (int i = 0; i < 6; i++)
	{
		std::cout << arr[i] << " ";
	}

	return 0;
}
