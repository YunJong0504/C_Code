#include <iostream>

int main()
{
	char arr[5] = {};
	int count = 0;

	for (int i = 0; i < 5; i++)
	{
		std::cin >> arr[i];
	}

	for (int i = 0; i < 5; i++)
	{
		if (arr[i] >= '0' && arr[i] <= '9')
		{
			count++;
		}
	}

	if (count == 0)
	{
		std::cout << "숫자미발견";
	}
	else
	{
		std::cout << "숫자" << count << "개발견";
	}
	
	return 0;
}
