#include <iostream>

int main()
{
	int arr[4] = { 3,1,2,5 };

	int a;
	std::cin >> a;

	if (arr[a] > 2)
	{
		std::cout << "우와";
	}
	else
	{
		std::cout << "ㅠㅠ";
	}

	return 0;
}
