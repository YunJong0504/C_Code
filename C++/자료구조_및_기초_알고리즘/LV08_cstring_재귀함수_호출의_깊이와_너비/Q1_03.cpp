#include <iostream>
#include <cstring>
using namespace std;

void bbq(int l, int b)
{
	if (l == 1)
		return;
	for (int i = 0; i < b; i++)
	{
		bbq(l - 1, b);
	}
}

int main()
{
	int level, branch;
	cin >> level >> branch;

	for(int i = 0; i < branch; i++)
	{
		bbq(level, branch);
	}

	return 0;
}
