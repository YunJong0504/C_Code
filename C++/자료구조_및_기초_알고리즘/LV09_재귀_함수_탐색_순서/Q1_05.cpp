#include <iostream>
#include <cstring>
using namespace std;

char path[5] = {};
char person[10] = "123456789";

void bbq(int level, int n)
{
	if (level == 4)
	{
		cout << path << endl;
		return;
	}
	for (int i = 0; i < n; i++)
	{
		path[level] = person[i];
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
