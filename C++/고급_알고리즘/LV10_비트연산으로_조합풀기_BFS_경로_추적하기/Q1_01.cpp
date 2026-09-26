#include <iostream>
#include <queue>
using namespace std;

int map[4][9] =
{
    0,1,2,1,4,8,3,1,3,
    2,3,2,3,4,2,3,1,3,
    2,2,2,3,4,3,4,3,3,
    0,2,1,3,4,2,1,3,2,
};
int visited[4][9] = {};

struct Node
{
    int y, x;
};

int dy[4] = { -1,1,0,0 };
int dx[4] = { 0,0,-1,1 };

int bfs(int y, int x, int num)
{
    if (visited[y][x] == 1)
        return 0;

    queue<Node> q;
    q.push({ y,x });

    visited[y][x] = 1;
    int mapCnt = 0;

    while (!q.empty())
    {
        Node n = q.front();
        q.pop();
        mapCnt++;

        for (int i = 0; i < 4; i++)
        {
            int ny = n.y + dy[i];
            int nx = n.x + dx[i];

            if (ny >= 0 && ny <= 3 && nx >= 0 && nx <= 8)
            {
                if (map[ny][nx] == num && visited[ny][nx] == 0)
                {
                    visited[ny][nx] = 1;
                    q.push({ ny,nx });
                }
            }
        }
    }

    return mapCnt;
}

int main()
{
    int maxCnt = 0;
    int maxNum = 0;

    for (int y = 0; y < 4; y++)
    {
        for (int x = 0; x < 9; x++)
        {
            int nowCnt = bfs(y, x, map[y][x]);
            if (nowCnt > maxCnt)
            {
                maxCnt = nowCnt;
                maxNum = map[y][x];
            }
        }
    }

    cout << maxCnt * maxNum << endl;

    return 0;
}
