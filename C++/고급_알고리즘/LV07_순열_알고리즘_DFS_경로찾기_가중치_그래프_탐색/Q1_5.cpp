#include <iostream>
#include <queue>

using namespace std;

struct Node
{
    int y;
    int x;
};

int map[4][6] =
{
    0,0,1,2,1,2,
    1,0,0,1,0,1,
    0,0,1,2,0,0,
    2,0,0,0,0,0,
};

int visited[4][6] = {};

int dx[4] = { 0, 0, -1, 1 };
int dy[4] = { -1, 1, 0, 0 };

int eatCnt = 0;

void bfs(int y, int x)
{
    queue<Node> q;

    q.push({ y,x });
    visited[y][x] = 1;

    while (!q.empty())   
    {
        Node n = q.front();
        q.pop();
        visited[n.y][n.x] = 1;

        if (map[n.y][n.x] == 2)
            eatCnt++;

        for (int i = 0; i < 4; i++)
        {
            int ny = n.y + dy[i];
            int nx = n.x + dx[i];

            if (ny < 0 || ny > 3 || nx < 0 || nx > 5)
                continue;

            if (map[ny][nx] == 1)
                continue;

            if (visited[ny][nx] != 0)
                continue;

            q.push({ ny, nx });
        }
    }
}

int main()
{
    bfs(0, 0);
    cout << eatCnt << endl;

    return 0;
}
