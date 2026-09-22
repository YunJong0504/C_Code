#include <iostream>

int main()
{
	char arr[6] = { 'D','T','A','B','W','Q' };
	char ch;
	std::cin >> ch;

	for (int i = 0; i < 6; i++)
	{
		if (arr[i] == ch)
		{
			std::cout << i << "번 INDEX";
			break;
		}
	}

	return 0;
}
