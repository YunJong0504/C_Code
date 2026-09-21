#include <iostream>
#include <queue>
using namespace std;

int map[3][3];
int visited[3][3];

int dx[4] = { 0, 0, -1, 1 };
int dy[4] = { -1, 1, 0, 0 };

int main()
{
    int x1, y1;
    int x2, y2;

    cin >> x1 >> y1;
    cin >> x2 >> y2;

    queue<pair<int, int>> q;

    map[y1][x1] = 1;
    visited[y1][x1] = 1;
    q.push({ x1, y1 });

    map[y2][x2] = 1;
    visited[y2][x2] = 1;
    q.push({ x2, y2 });

    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx < 0 || nx >= 3 ||
                ny < 0 || ny >= 3)
            {
                continue;
            }

            if (visited[ny][nx] == 0)
            {
                visited[ny][nx] = 1;

                map[ny][nx] = map[y][x] + 1;

                q.push({ nx, ny });
            }
        }
    }

    for (int y = 0; y < 3; y++)
    {
        for (int x = 0; x < 3; x++)
        {
            cout << map[y][x];
        }

        cout << '\n';
    }

    return 0;
}
