#include <iostream>

int main()
{
	char ch1, ch2;
	std::cin >> ch1 >> ch2;

	if (ch1 >= 'a' && ch1 <= 'z')
		std::cout << (char)(ch1 - 32) << " ";
	else if (ch1 >= 'A' && ch1 <= 'Z')
		std::cout << (char)(ch1 + 32) << " ";
	
	if (ch2 >= 'a' && ch2 <= 'z')
		std::cout << (char)(ch2 - 32) << " ";
	else if (ch2 >= 'A' && ch2 <= 'Z')
		std::cout << (char)(ch2 + 32) << " ";

	return 0;
}
