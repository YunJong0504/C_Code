#include <iostream>
#include <queue>
using namespace std;

int map[4][4] =
{
    1,1,0,1,
    0,1,0,1,
    0,1,1,0,
    1,0,0,0,
};
int visited[4][4] = {};

struct Node
{
    int y, x;
};

int dy[4] = { 0,0,-1,1 };
int dx[4] = { -1,1,0,0 };

int bfs(int y, int x)
{
    queue<Node> q;
    q.push({ y, x });
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

            if (ny >= 0 && ny < 4 && nx >= 0 && nx < 4)
            {
                if (map[ny][nx] == 1 && visited[ny][nx] == 0)
                {
                    visited[ny][nx] = 1;
                    q.push({ ny, nx });
                }
            }
        }
    }

    return mapCnt;
}

int main()
{
    int island = bfs(0, 0);
    cout << island;

    return 0;
}
