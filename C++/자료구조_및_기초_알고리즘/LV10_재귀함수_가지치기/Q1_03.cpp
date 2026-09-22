#include <iostream>
#include <cstring>
using namespace std;

char choco[4] = "ABC";
char path[4] = {};
int cnt = 0;

void bbq(int level, int n)
{
	if (level == 3 && (path[level - 3] == path[level - 2] && path[level - 2] == path[level - 1]))
		return;
	if (level == 3)
	{
		cnt++;
		return;
	}
	for (int i = 0; i < n; i++)
	{
		path[level] = choco[i];
		bbq(level + 1, n);
		path[level] = 0;
	}
}

int main()
{
	int n;
	cin >> n;

	bbq(0, n);
	cout << cnt;

	return 0;
}
