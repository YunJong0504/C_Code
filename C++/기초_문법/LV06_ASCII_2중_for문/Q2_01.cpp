#include <iostream>

int main()
{
	char ch1, ch2;
	std::cin >> ch1 >> ch2;

	std::cout << "문자 '" << ch1 << "'의 아스키코드값은 " << (int)ch1 << std::endl;
	std::cout << "문자 '" << ch2 << "'의 아스키코드값은 " << (int)ch2 << std::endl;


	return 0;
}
