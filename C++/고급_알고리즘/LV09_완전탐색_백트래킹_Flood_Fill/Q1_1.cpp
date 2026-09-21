#include <iostream>
#include <queue>

using namespace std;

int map[4][4] =
{
    {0, 0, 0, 0},
    {1, 1, 0, 1},
    {0, 0, 0, 0},
    {1, 0, 1, 0}
};

int visited[4][4];

int dx[4] = { 0, 0, -1, 1 };
int dy[4] = { -1, 1, 0, 0 };

int main()
{
    int startX, startY;
    int endX, endY;

    cin >> startX >> startY;
    cin >> endX >> endY;

    queue<pair<int, int>> q;

    q.push({ startX, startY });
    visited[startY][startX] = 1;

    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        if (x == endX && y == endY)
        {
            cout << visited[y][x] << endl;
            return 0;
        }

        for (int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx < 0 || nx >= 4 ||
                ny < 0 || ny >= 4)
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

    return 0;
}
