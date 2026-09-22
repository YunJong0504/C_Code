#include <iostream>

int main()
{
	char arr[5] = {};
	for (int i = 0; i < 5; i++)
	{
		std::cin >> arr[i];
	}
	int count = 0;

	for (int i = 0; i < 5; i++)
	{
		if (arr[i] == 'A')
		{
			count++;
			std::cout << i << "번" << std::endl;
		}
	}
	std::cout << "문자A는 " << count << "개발견";

	return 0;
}
