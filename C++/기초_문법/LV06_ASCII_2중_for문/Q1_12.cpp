#include <iostream>

int flag;
char a, b, c;

void input()
{
	std::cin >> a >> b >> c;
}

void process()
{
	if (a == 'A' && b == 'B' && c == 'C')
	{
		flag = 1;
	}
}

void output()
{
	if (flag == 1)
	{
		std::cout << "ABC를 찾았다";
	}
	else
	{
		std::cout << "못찾았다";
	}
}

int main()
{
	input();
	process();
	output();

	return 0;
}
