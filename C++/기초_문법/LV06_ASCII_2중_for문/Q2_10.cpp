#include <iostream>

int main()
{
	char arr[3] = {};
	for (int i = 0; i < 3; i++)
	{
		std::cin >> arr[i];
	}

	if (arr[0] >= arr[1] && arr[0] >= arr[2])
	{
		std::cout << "옳다" << arr[0];
	}
	else
	{
		std::cout << "옳지않음";
	}

	return 0;
}
