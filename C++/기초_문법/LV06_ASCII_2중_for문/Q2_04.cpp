#include <iostream>

int main()
{
	char ch;
	std::cin >> ch;

	if (ch >= 'A' && ch <= 'Z')
	{
		std::cout << "대문자입력!!";
	}
	else if (ch >= 'a' && ch <= 'z')
	{
		std::cout << "소문자입력!!";
	}
	else if (ch >= '0' && ch <= '9')
	{
		std::cout << "숫자문자입력!!";
	}
	
	return 0;
}
