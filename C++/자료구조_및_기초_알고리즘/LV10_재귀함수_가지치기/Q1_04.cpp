#include <iostream>
#include <cstring>
using namespace std;

char path[6] = {};
char name[6] = "BTSKR";
int visited[5] = {};
int cnt = 0;

void bbq(int level, int n)
{
	if (level == n && visited[2] == 0)
		return;
	if (level == n)
	{
		cnt++;
		return;
	}
	for (int i = 0; i < 5; i++)
	{
		if (visited[i] == 1)
			continue;

		visited[i] = 1;
		path[level] = name[i];
		bbq(level + 1, n);
		path[level] = 0;
		visited[i] = 0;
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
