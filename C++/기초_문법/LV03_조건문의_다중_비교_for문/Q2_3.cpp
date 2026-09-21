#include <iostream>

int main()
{
	int a, b, c, d;
	std::cin >> a >> b >> c >> d;

	if (a == 1 && b == 2 && c == 3 && d == 4)
	{
		std::cout << "로그인성공";
	}
	else
	{
		std::cout << "로그인실패";
	}

	return 0;
}
