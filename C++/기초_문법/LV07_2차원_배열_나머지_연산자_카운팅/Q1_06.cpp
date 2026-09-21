#include <iostream>

int main()
{
	for (int i = 0; i < 4; i++)
	{
		int num;
		std::cin >> num;

		if (num > 20)
			std::cout << "더 작은수를 입력하세요" << std::endl;
		else if (num < 20)
			std::cout << "더 큰수를 입력하세요" << std::endl;
		else if (num == 20)
			std::cout << "정답입니다" << std::endl;
	}

	return 0;
}
