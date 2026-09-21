#include <iostream>
#include <queue>

using namespace std;

struct Node
{
    int y;
    int x;
};

int map[4][4] =
{
    {0, 0, 0, 0},
    {1, 1, 0, 1},
    {0, 0, 0, 0},
    {1, 0, 1, 0}
};

int visited[4][4] = {};

int dx[4] = { 0, 0, -1, 1 };
int dy[4] = { -1, 1, 0, 0 };

int main()
{
    int startY, startX;
    int endY, endX;

    cin >> startX >> startY;
    cin >> endX >> endY;

    queue<Node> q;

    q.push({ startY, startX });
    visited[startY][startX] = 1;

    while (!q.empty())
    {
        Node now = q.front();
        q.pop();

        if (now.y == endY && now.x == endX)
        {
            cout << visited[now.y][now.x] - 1 << endl;
            return 0;
        }

        for (int i = 0; i < 4; i++)
        {
            int ny = now.y + dy[i];
            int nx = now.x + dx[i];

            if (ny < 0 || ny >= 4 || nx < 0 || nx >= 4)
                continue;

            if (map[ny][nx] == 1)
                continue;

            if (visited[ny][nx] != 0)
                continue;

            visited[ny][nx] = visited[now.y][now.x] + 1;

            q.push({ ny, nx });
        }
    }

    return 0;
}
