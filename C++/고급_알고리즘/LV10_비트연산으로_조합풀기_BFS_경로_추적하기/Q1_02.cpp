#include <iostream>
#include <queue>
using namespace std;

char button[5] = "1234";

struct Node
{
    int now;
    int end;
    int click;
};

int cal(char ch, int n)
{
    if (ch == '1')
        return n / 2;
    else if (ch == '2')
        return n * 2;
    else if (ch == '3')
        return n + 1;
    else if (ch == '4')
        return n - 1;
}

void bfs(int now, int end)
{
    queue<Node> q;
    q.push({ now, end, 0 });

    while (!q.empty())
    {
        Node n = q.front();
        q.pop();

        if (n.now == n.end)
        {
            cout << n.click << endl;
            return;
        }

        for (int i = 0; i < 4; i++)
        {
            int next = cal(button[i], n.now);
            q.push({ next,n.end,n.click + 1 });
        }
    }
}

int main()
{
    int nowCh, endCh;
    cin >> nowCh >> endCh;

    bfs(nowCh, endCh);

    return 0;
}
