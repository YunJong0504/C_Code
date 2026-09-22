#include <iostream>

int main()
{
	int arr[6] = { 3,4,2,5,7,9 };
	int idx1, idx2;
	std::cin >> idx1 >> idx2;
	int temp;

	temp = arr[idx1];
	arr[idx1] = arr[idx2];
	arr[idx2] = temp;

	for (int i = 0; i < 6; i++)
	{
		std::cout << arr[i] << " ";
	}

	return 0;
}
