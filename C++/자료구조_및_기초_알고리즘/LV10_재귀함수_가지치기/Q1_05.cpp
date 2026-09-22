#include <iostream>
#include <cstring>
using namespace std;

char path[6] = {};
char name[6] = "EWABC";
int visited[5] = {};

void bbq(int level, char ch)
{
	if (level == 4)
	{
		cout << path << endl;
		return;
	}
	for (int i = 0; i < 5; i++)
	{
		if (visited[i] == 1)
			continue;
		if (name[i] == ch)
			continue;

		path[level] = name[i];
		visited[i] = 1;
		bbq(level + 1, ch);
		path[level] = 0;
		visited[i] = 0;
	}
}

int main()
{
	char ch;
	cin >> ch;

	bbq(0, ch);

	return 0;
}
