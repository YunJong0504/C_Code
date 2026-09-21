#include <iostream>
using namespace std;

int mapData[4][4] =
{
    {0, 0, 0, 0},
    {1, 1, 0, 1},
    {0, 0, 0, 0},
    {0, 1, 1, 0}
};

bool visited[4][4];

int dy[4] = {-1, 1, 0, 0};
int dx[4] = {0, 0, -1, 1};

int endY, endX;
int answer = 999999;

void DFS(int y, int x, int count)
{
    if (y == endY && x == endX)
    {
        if (count < answer)
            answer = count;

        return;
    }

    for (int i = 0; i < 4; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];

        if (ny < 0 || ny >= 4 || nx < 0 || nx >= 4)
            continue;

        if (mapData[ny][nx] == 1)
            continue;

        if (visited[ny][nx])
            continue;

        visited[ny][nx] = true;

        DFS(ny, nx, count + 1);

        visited[ny][nx] = false;
    }
}

int main()
{
    int startY, startX;

    cin >> startY >> startX;

    cin >> endY >> endX;

    visited[startY][startX] = true;

    DFS(startY, startX, 0);

    cout << answer << endl;

    return 0;
}
