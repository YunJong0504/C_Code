#include <iostream>
#include <queue>
using namespace std;

int map[3][5] =
{
    0,0,0,0,1,
    1,0,1,0,0,
    0,0,0,0,1,
};

struct Node
{
    int y, x;
};

int dy[4] = { -1,1,0,0 };
int dx[4] = { 0,0,-1,1 };

int bfs(int startY, int startX, int endY, int endX)
{
    int visited[3][5] = {};

    queue<Node> q;

    q.push({ startY,startX });
    visited[startY][startX] = 0;

    while (!q.empty())
    {
        Node now = q.front();
        q.pop();

        if (now.y == endY && now.x == endX)
            return visited[now.y][now.x];

        for (int i = 0; i < 4; i++)
        {
            int ny = now.y + dy[i];
            int nx = now.x + dx[i];

            if (map[ny][nx] == 1)
                continue;
            if (ny < 0 || ny > 2 || nx < 0 || nx > 4)
                continue;
            if (visited[ny][nx] != 0)
                continue;

            visited[ny][nx] = visited[now.y][now.x] + 1;

            q.push({ ny,nx });
        }
    }

    return -1;
}

int main()
{
    int cheeseY, cheeseX;
    int friendY, friendX;

    cin >> cheeseY >> cheeseX;
    cin >> friendY >> friendX;

    int dist1 = bfs(0, 0, cheeseY, cheeseX);
    int dist2 = bfs(cheeseY, cheeseX, friendY, friendX);

    cout << dist1 + dist2 << endl;

    return 0;
}
