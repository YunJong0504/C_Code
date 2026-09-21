#include <iostream>
#include <queue>
using namespace std;

char value[6] = "GTHKB";
int map[5][5] = 
{
    0,3,6,2,0,
    0,0,2,0,4,
    0,0,0,0,1,
    0,0,0,0,8,
    0,10,0,0,0
};
int visited[10] = {};

int start, finish;

char path[10] = {};
char minpath[10] = {};
int mincost = INT_MAX;
int pathlen = 0;

void dfs(int now, int cost)
{
    if (now == finish)
    {
        if (cost < mincost)
        {
            mincost = cost;
            for (int i = 0; i < pathlen; i++)
            {
                minpath[i] = path[i];
            }

			minpath[pathlen] = '\0';
        }

        return;
    }

    for (int next = 0; next < 5; next++)
    {
        if (map[now][next] != 0 && visited[next] == 0)
        {
			visited[next] = 1;
			path[pathlen++] = value[next];
			dfs(next, cost + map[now][next]);
			pathlen--;
			visited[next] = 0;
        }
    }
}

int main()
{
    char s, f;
    cin >> s >> f;

	for (int i = 0; i < 5; i++)
	{
		if (value[i] == s)
		{
			start = i;
		}
		if (value[i] == f)
		{
			finish = i;
		}
	}

    visited[start] = 1;

    path[0] = s;
    pathlen = 1;

	dfs(start, 0);

    if (mincost == INT_MAX)
        cout << "impossible";
    else
    {
		cout << mincost << ":" << minpath;
    }

    return 0;
}
