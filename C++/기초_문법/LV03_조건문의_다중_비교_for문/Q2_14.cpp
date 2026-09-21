#include <iostream>

int main()
{
	int id, pw;
	std::cin >> id >> pw;

	if (id != 1111)
		std::cout << "아이디가 틀렸습니다";
	else if (id == 1111)
	{
		if (pw != 2222)
			std::cout << "비밀번호가 틀렸습니다";
		else if (pw == 2222)
			std::cout << "로그인성공";
	}

	return 0;
}
