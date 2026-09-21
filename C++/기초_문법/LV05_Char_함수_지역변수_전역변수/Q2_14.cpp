#include <iostream>

int main()
{
	int arr[6] = {};
	int a, b;
	std::cin >> a >> b;

	int t = 0;

	for (int i = a; i <= b; i++)
	{
		arr[t] = i;
		t++;
	}

	for (int i = 0; i < t; i++)
	{
		std::cout << arr[i];
	}

	return 0;
}
