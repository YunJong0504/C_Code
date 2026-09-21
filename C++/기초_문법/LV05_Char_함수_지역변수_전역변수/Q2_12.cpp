#include <iostream>

int main()
{
	int arr[5] = {};
	
	for (int i = 0; i < 5; i++)
	{
		std::cin >> arr[i];
	}

	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		sum += arr[i];
	}

	std::cout << "합은 " << sum << "입니다.";

	return 0;
}
