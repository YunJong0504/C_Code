#include <iostream>
#include <queue>
using namespace std;

int map[8][8] =
{
    0,1,1,1,0,0,0,0,
    1,0,0,1,1,0,0,0,
    1,0,0,0,0,1,1,0,
    1,1,0,0,1,0,0,1,
    0,1,0,1,0,0,0,1,
    0,0,1,0,0,0,1,1,
    0,0,1,0,0,1,0,1,
    0,0,0,1,1,1,1,0
};

char val[9] = "31684297";

struct Node
{
    int num;
    int level;
};

queue<Node> q;
int used[8] = {};

void bfs()
{
	q.push({ 0, 0 });
    used[0] = 1;

    while (!q.empty())
    {
        Node n = q.front();
        cout << val[n.num] << " ";
        q.pop();

        for (int i = 0; i < 8; i++)
        {
			if (map[n.num][i] == 1 && used[i] == 0)
			{
				q.push({ i, n.level + 1 });
				used[i] = 1;
			}
        }
    }
}

int main()
{
    bfs();

    return 0;
}
