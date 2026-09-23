#include <iostream>
#include <algorithm>
using namespace std;

int map[6][6] =
{
	0,1,1,0,0,0,
	0,0,0,1,1,1,
	0,0,0,0,0,0,
	0,0,0,0,0,0,
	0,0,0,0,0,0,
	0,0,0,0,0,0,
};
char path[7] = "";

void dfs(int now, int level)
{
	bool child = false;

	for (int i = 0; i < 6; i++)
	{
		if (map[now][i] == 1)
		{
			child = true;
			path[level + 1] = char('A' + i);
			dfs(i, level + 1);
			path[level + 1] = 0;
		}
	}

	if (!child)
	{
		std::cout << path << std::endl;
	}
}

int main()
{
	path[0] = 'A';
	dfs(0, 0);

	return 0;
}
