#include <iostream>

int main()
{
	int a, b;
	std::cin >> a >> b;

	if (a == 7 && b == 9)
	{
		std::cout << "인증됨";
	}
	else
	{
		std::cout << "재시도";
	}

	return 0;
}
