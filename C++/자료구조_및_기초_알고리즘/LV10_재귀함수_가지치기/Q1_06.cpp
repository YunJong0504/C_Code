#include <iostream>
#include <cstring>
using namespace std;

int path[5] = {};
int card[5] = {};
int cnt = 0;

void bbq(int level)
{
	if (level >= 2 && abs(path[level - 1] - path[level - 2]) > 3)
	{
		return;
	}
	if (level == 4)
	{
		cnt++;
		return;
	}
	for (int i = 0; i < 5; i++)
	{
		path[level] = card[i];
	
		bbq(level + 1);
		path[level] = 0;
	}
}

int main()
{
	for (int i = 0; i < 5; i++)
	{
		cin >> card[i];
	}

	bbq(0);
	cout << cnt;

	return 0;
}
