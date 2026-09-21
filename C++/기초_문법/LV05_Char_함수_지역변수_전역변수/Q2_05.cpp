#include <iostream>

int main()
{
	int arr[5] = { 4,1,2,3,5 };
	char ch;
	std::cin >> ch;

	if (ch == 'a' || ch == 'b' || ch == 'c')
	{
		for (int i = 3; i >= 0; i--)
		{
			std::cout << arr[i] << " ";
		}
	}
	else
	{
		for (int i = 4; i >= 1; i--)
		{
			std::cout << arr[i] << " ";
		}
	}

	return 0;
}
