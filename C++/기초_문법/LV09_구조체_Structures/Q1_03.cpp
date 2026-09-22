#include <iostream>

int main()
{
	char arr[6] = { 'A','F','G','A','B','C' };
	char ch1, ch2;
	int count1 = 0;
	int count2 = 0;
	std::cin >> ch1 >> ch2;

	for (int i = 0; i < 6; i++)
	{
		if (arr[i] == ch1)
			count1++;
		else if (arr[i] == ch2)
			count2++;
	}

	if (count1 > 0 && count2 > 0)
		std::cout << "와2개";
	else if ((count1 > 0 && count2 == 0) || (count1 == 0 && count2 > 0))
		std::cout << "오1개";
	else if (count1 == 0 && count2 == 0)
		std::cout << "우0개";

	return 0;
}
