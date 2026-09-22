#include <iostream>

void checkChar(char ch)
{
	if (ch >= 'A' && ch <= 'Z')
		std::cout << "대";
	else
		std::cout << "소";
}

int main()
{
	char arr[5] = {};
	for (int i = 0; i < 5; i++)
	{
		std::cin >> arr[i];
	}

	for (int i = 0; i < 5; i++)
	{
		checkChar(arr[i]);
	}

	return 0;
}
