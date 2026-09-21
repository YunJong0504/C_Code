#include <iostream>
#include <queue>
using namespace std;

struct Node
{
    int y, x;
};

int main()
{
    int map[4][5];

    int dy[8] = { -1, -1, -1, 0, 0, 1, 1, 1 };
    int dx[8] = { -1, 0, 1, -1, 1, -1, 0, 1 };

    queue<Node> q;

    for (int y = 0; y < 4; y++)
    {
        for (int x = 0; x < 5; x++)
        {
            cin >> map[y][x];

            if (map[y][x] == 1)
            {
                q.push({ y, x });
            }
        }
    }

    int time = 0;

    while (!q.empty())
    {
        int size = q.size();

        for (int i = 0; i < size; i++)
        {
            Node n = q.front();
            q.pop();

            for (int j = 0; j < 8; j++)
            {
                int ny = n.y + dy[j];
                int nx = n.x + dx[j];

                if (ny < 0 || ny >= 4 || nx < 0 || nx >= 5)
                {
                    continue;
                }

                if (map[ny][nx] == 0)
                {
                    map[ny][nx] = 1;

                    q.push({ ny, nx });
                }
            }
        }

        if (!q.empty())
        {
            time++;
        }
    }

    cout << time << endl;

    return 0;
}
