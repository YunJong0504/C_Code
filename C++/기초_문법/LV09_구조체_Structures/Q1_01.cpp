#include <iostream>

int main()
{
	int arr[8] = { 4,5,6,1,3,1,5,8 };
	int num;
	std::cin >> num;
	int count = 0;

	for (int i = 0; i < 8; i++)
	{
		if (arr[i] == num)
		{
			count++;
		}
	}

	std::cout << "숫자" << num << "개수는" << count << "개";

	return 0;
}
