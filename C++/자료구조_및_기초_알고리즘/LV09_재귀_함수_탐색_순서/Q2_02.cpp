#include <iostream>
#include <cstring>
using namespace std;

char path[10] = {};
char OX[3] = "XO";

void bbq(int level, int n)
{
	if (level == n)
	{
		cout << path << endl;
		return;
	}
	for (int i = 0; i < 2; i++)
	{
		path[level] = OX[i];
		bbq(level + 1, n);
		path[level] = 0;
	}
}

int main()
{
	int n;
	cin >> n;

	bbq(0, n);

	return 0;
}
