#include <iostream>

int main()
{
	int arr[11] = { 3,4,1,5,8,1,7,7,3,6,9 };

	int num;
	std::cin >> num;

	for (int i = 0; i < 11; i += num)
	{
		std::cout << arr[i] << " ";
	}

	return 0;
}
