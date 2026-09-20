#include <iostream>
#include <unordered_set>
#include <queue>
using namespace std;

struct Node
{
    int num;
    int level;
    int sum;
};

char name[5] = "NGYD";
int map[4][4] =
{
    0,80,30,60,
    80,0,40,0,
    30,40,0,70,
    60,0,70,0,
};

char path[5] = "";
int used[5] = {};
int MIN = 9999;

void bfs(int now, int level, int sum)
{
    queue<Node> q;
    q.push({ now, level, sum });
    used[0] = 1;

    while (!q.empty())
    {
        Node now = q.front();

        if (name[now.num] == 'G')
        {
            if (now.sum < MIN)
                MIN = now.sum;
        }

        for (int i = 0; i < 4; i++)
        {
            if (used[i] == 1)
                continue;
            if (map[now.num][i] == 0)
                continue;

            used[i] = 1;
            q.push({ i, now.level + 1, now.sum + map[now.num][i] });
        }
    }
}

int main()
{
    bfs(0, 0, 0);

    return 0;
}
