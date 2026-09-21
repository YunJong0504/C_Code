#include <iostream>
using namespace std;

int map[4][4] =
{
    {0, 0, 0, 0},
    {1, 1, 0, 1},
    {0, 0, 0, 0},
    {0, 1, 1, 0}
};

int visited[4][4];

int dy[4] = { -1, 1, 0, 0 };
int dx[4] = { 0, 0, -1, 1 };

int startY, startX;
int endY, endX;

int answer = 9999;

void DFS(int y, int x, int count)
{
    if (y == endY && x == endX)
    {
        if (count < answer)
        {
            answer = count;
        }

        return;
    }

    for (int dir = 0; dir < 4; dir++)
    {
        int ny = y + dy[dir];
        int nx = x + dx[dir];

        if (ny < 0 || ny >= 4 ||
            nx < 0 || nx >= 4)
        {
            continue;
        }

        if (map[ny][nx] == 1)
        {
            continue;
        }

        if (visited[ny][nx] == 1)
        {
            continue;
        }

        visited[ny][nx] = 1;

        DFS(ny, nx, count + 1);

        visited[ny][nx] = 0;
    }
}

int main()
{
    cin >> startY >> startX;
    cin >> endY >> endX;

    visited[startY][startX] = 1;

    DFS(startY, startX, 0);

    cout << answer << endl;

    return 0;
}
