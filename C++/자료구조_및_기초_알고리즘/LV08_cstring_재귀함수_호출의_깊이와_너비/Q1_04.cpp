#include <iostream>
#include <cstring>
using namespace std;

void bbq(int l, int n)
{
	cout << n;
	if (l == 1)
		return;
	for (int i = 0; i < 2; i++)
	{
		bbq(l - 1, n + 1);
	}
}

int main()
{
	int level;
	cin >> level;
	int num = 0;

	cout << num;
	for(int i = 0; i < 2; i++)
	{
		bbq(level, num + 1);
	}

	return 0;
}
