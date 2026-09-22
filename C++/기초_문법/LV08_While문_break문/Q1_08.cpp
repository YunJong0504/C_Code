#include <iostream>

int main()
{
	char ch[6] = { '#','_','#','_','#','#' };

	for (int i = 0; i < 6; i++)
	{
		if (ch[i] == '#')
			std::cout << "샵";
		else if (ch[i] == '_')
			std::cout << "무";
	}

	return 0;
}
