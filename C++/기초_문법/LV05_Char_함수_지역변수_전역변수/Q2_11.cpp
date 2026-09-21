#include <iostream>

int main()
{
	int arr[6] = {};
	std::cin >> arr[0] >> arr[1] >> arr[2];

	int num;
	std::cin >> num;

	for (int i = 3; i < 6; i++)
	{
		arr[i] = num;
		num++;
	}
	for (int i = 0; i < 6; i++)
	{
		std::cout << arr[i] << " ";
	}

	return 0;
}
