#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	std::cin >> n;

	int result = 1;

	for (int i = 0; i < 3; i++)
	{
		result *= (n - i);
	}

	std::cout << result;

	return 0;
}
