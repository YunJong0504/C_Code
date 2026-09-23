#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	string a, b, c;
	std::cin >> a >> b >> c;

	string max = a;

	if (b.length() > max.length() || (b.length() == max.length() && b > max))
		max = b;

	if (c.length() > max.length() || (c.length() == max.length() && c > max))
		max = c;

	std::cout << max;

	return 0;
}
