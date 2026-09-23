#include <iostream>
#include <queue>
using namespace std;

char value[7] = "012345";
int visited[6] = {};
int map[6][6] =
{
	0,0,1,1,0,1,
	0,0,0,1,1,1,
	0,0,0,0,1,1,
	0,0,0,0,0,0,
	1,0,0,0,0,1,
	0,0,0,0,0,0,
};

char path[6] = "";
void dfs(int now, int level)
{
	std::cout << value[now] << " ";

	for (size_t i = 0; i < 6; i++)
	{
		if (map[now][i] == 1 && visited[i] == 0)
		{
			visited[i] = 1;
			path[level + 1] = value[i];
			dfs(i, level + 1);
			path[level + 1] = 0;
		}
	}
}

int main()
{
	visited[0] = 1;
	path[0] = value[0];
	dfs(0, 0);

	return 0;
}
