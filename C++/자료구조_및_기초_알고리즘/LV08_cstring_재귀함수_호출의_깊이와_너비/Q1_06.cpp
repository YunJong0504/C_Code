#include <iostream>
#include <cstring>
using namespace std;

void bbq(int b, int l, int &c)
{
	c++;
	if (l == 0)
		return;
	for (int i = 0; i < b; i++)
	{
		bbq(b, l - 1, c);
	}
}

int main()
{
	int branch, level;
	cin >> branch >> level;

	int count = 0;
	bbq(branch, level, count);
	cout << count;

	return 0;
}
