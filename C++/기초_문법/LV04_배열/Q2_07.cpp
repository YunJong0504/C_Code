#include <iostream>

int main()
{
	int arr[10] = { 5,7,1,8,-4,-73,4,2,20,84 };

	int index;
	std::cin >> index;

	for (int i = index; i >= 0; i--)
	{
		std::cout << arr[i] << std::endl;
	}

	return 0;
}
