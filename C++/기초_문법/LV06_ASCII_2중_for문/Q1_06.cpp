#include <iostream>

int main()
{
	char ch;
	std::cin >> ch;

	if ('A' <= ch && 'Z' >= ch)
	{
		std::cout << "대문자입니다.";
	}
	else if ('a' <= ch && 'z' >= ch)
	{
		std::cout << "소문자입니다.";
	}

	return 0;
}
