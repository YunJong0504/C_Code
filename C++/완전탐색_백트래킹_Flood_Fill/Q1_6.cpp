#include <iostream>
#include <queue>
#include <string>
using namespace std;

int dy[4] = { -1, 1, 0, 0 };
int dx[4] = { 0, 0, -1, 1 };

int main()
{
    string map[3];

    for (int y = 0; y < 3; y++)
    {
        cin >> map[y];
    }

    int curY = 0;
    int curX = 0;

    int answer = 0;

    for (char target = '1'; target <= '4'; target++)
    {
        int dist[3][5];

        for (int y = 0; y < 3; y++)
        {
            for (int x = 0; x < 5; x++)
            {
                dist[y][x] = -1;
            }
        }

        queue<pair<int, int>> q;

        q.push({ curY, curX });
        dist[curY][curX] = 0;

        int targetY = -1;
        int targetX = -1;

        while (!q.empty())
        {
            int y = q.front().first;
            int x = q.front().second;
            q.pop();

            if (map[y][x] == target)
            {
                targetY = y;
                targetX = x;
                break;
            }

            for (int dir = 0; dir < 4; dir++)
            {
                int ny = y + dy[dir];
                int nx = x + dx[dir];

                if (ny < 0 || ny >= 3 || nx < 0 || nx >= 5)
                    continue;

                if (map[ny][nx] == '#')
                    continue;

                if (dist[ny][nx] != -1)
                    continue;

                dist[ny][nx] = dist[y][x] + 1;
                q.push({ ny, nx });
            }
        }

        answer += dist[targetY][targetX];

        curY = targetY;
        curX = targetX;
    }

    cout << answer << '\n';

    return 0;
}
