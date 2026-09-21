#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

char node[5] = "NGYD";
int map[4][4] =
{
    0,80,30,60,
    80,0,40,0,
    30,40,0,70,
    60,0,70,0,
};

char path[5] = "";
int visited[5] = {};
int MIN = 9999;

void dfs(int level, int now, int sum)
{
    if (node[now] == 'G')
    {
        if (sum < MIN)
            MIN = sum;

        return;
    }

    for (int i = 0; i < 4; i++)
    {
        if (map[now][i] > 0 && visited[i] == 0)
        {
            path[level + 1] = node[i];
            visited[i] = 1;
            dfs(level + 1, i, sum + map[now][i]);
            visited[i] = 0;
            path[level + 1] = 0;
        }
    }
}

int main()
{
    path[0] = node[0];
    visited[0] = 1;
    dfs(0, 0, 0);

    return 0;
}
