#include <iostream>
#include <cstring>
using namespace std;

void bbq(int n)
{
	cout << n << " ";
	if (n == 1)
		return;
	bbq(n - 1);
	cout << n << " ";
}

int main()
{
	char str[256] = {};
	cin >> str;
	int len = strlen(str);

	bbq(len);

	return 0;
}
