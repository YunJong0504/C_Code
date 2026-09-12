#include <iostream>
#include <queue>

using namespace std;

int map[3][5] =
{
    {0, 0, 0, 0, 1},
    {1, 0, 1, 0, 0},
    {0, 0, 0, 0, 1}
};

int dx[4] = { 0, 0, -1, 1 };
int dy[4] = { -1, 1, 0, 0 };

int bfs(int startX, int startY, int endX, int endY)
{
    int visited[3][5] = {};

    queue<pair<int, int>> q;

    q.push({ startX, startY });
    visited[startY][startX] = 0;

    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        if (x == endX && y == endY)
        {
            return visited[y][x];
        }

        for (int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx < 0 || nx >= 5 ||
                ny < 0 || ny >= 3)
            {
                continue;
            }

            if (map[ny][nx] == 1)
            {
                continue;
            }

            if (visited[ny][nx] != 0)
            {
                continue;
            }

            visited[ny][nx] = visited[y][x] + 1;

            q.push({ nx, ny });
        }
    }

    return -1;
}

int main()
{
    int cheeseX, cheeseY;
    int friendX, friendY;

    cin >> cheeseX >> cheeseY;

    cin >> friendX >> friendY;

    int distance1 = bfs(0, 0, cheeseX, cheeseY);

    int distance2 = bfs(cheeseX, cheeseY, friendX, friendY);

    cout << distance1 + distance2 << endl;

    return 0;
}
