#include <iostream>
#include <cstring>
using namespace std;

char name[5] = {};
char path[4] = {};
int cnt = 0;

void bbq(int level)
{
	if ((level >= 2 && path[level - 2] == 'B' && path[level - 1] == 'T') || (level >= 2 && path[level - 2] == 'T' && path[level - 1] == 'B'))
		return;
	if (level == 4)
	{
		cnt++;
		return;
	}
	for (int i = 0; i < 4; i++)
	{
		path[level] = name[i];
		bbq(level + 1);
		path[level] = 0;
	}
}

int main()
{
	cin >> name;

	bbq(0);
	cout << cnt;

	return 0;
}
