#include <iostream>

int main()
{
	int score;
	std::cin >> score;

	if (score >= 80)
		std::cout << "수";
	else if (score >= 70 && score < 80)
		std::cout << "우";
	else if (score >= 60 && score < 70)
		std::cout << "미";
	else
		std::cout << "재시도";

	return 0;
}
