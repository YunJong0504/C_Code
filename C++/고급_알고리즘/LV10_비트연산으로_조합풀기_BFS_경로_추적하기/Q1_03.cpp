#include <iostream>
#include <queue>
using namespace std;

int map[5][8] =
{
    0,0,0,0,0,0,0,0,
    0,1,0,1,0,1,1,1,
    0,1,1,1,0,0,1,1,
    0,0,0,0,0,1,0,0,
    0,1,1,1,1,1,0,0
};

int dy[4] = { -1,1,0,0 };
int dx[4] = { 0,0,-1,1 };

struct Node
{
    int y, x;
};

void bfs(int y, int x)
{
    queue<Node> q;
    q.push({ y,x });

    while (!q.empty())
    {
        Node n = q.front();
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int ny = n.y + dy[i];
            int nx = n.x + dx[i];

            if (ny >= 0 && ny <= 4 && nx >= 0 && nx <= 7)
            {
                if (map[ny][nx] == 1)
                {
                    map[ny][nx] = 0;
                    q.push({ ny,nx });
                }
            }
        }
    }
}

int main()
{
    int cnt = 0;

    for (int y = 0; y < 5; y++)
    {
        for (int x = 0; x < 8; x++)
        {
            if (map[y][x] == 1)
            {
                cnt++;
                bfs(y, x);
            }
        }
    }

    cout << cnt;

    return 0;
}
