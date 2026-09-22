#include <iostream>
#include <cstring>
using namespace std;

char name[5] = {};
char path[4] = {};
int visited[4] = {};

void gift(int level)
{
	if (level == 3)
	{
		cout << path << endl;
		return;
	}
	for (int i = 0; i < 4; i++)
	{
		if (visited[i] == 1)
			continue;

		visited[i] = 1;
		path[level] = name[i];
		gift(level + 1);
		path[level] = 0;
		visited[i] = 0;
	}
}

int main()
{
	cin >> name;

	gift(0);

	return 0;
}
