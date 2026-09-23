#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	std::cin >> n;

	while (n--)
	{
		string pw;
		std::cin >> pw;

		int result = 0;

		for (int i = 0; i < 4; i++)
		{
			result = result * 26 + (pw[i] - 'A');
		}

		std::cout << result + 1 << std::endl;
	}

	return 0;
}
