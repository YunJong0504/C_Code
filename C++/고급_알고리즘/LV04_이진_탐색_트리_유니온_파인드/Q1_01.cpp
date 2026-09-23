#include <iostream>
using namespace std;

int parent[4];

int Find(int x)
{
    if (parent[x] == x)
        return x;

    return parent[x] = Find(parent[x]);
}

void Union(int a, int b)
{
    a = Find(a);
    b = Find(b);

    if (a != b)
        parent[b] = a;
}

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
        parent[i] = i;

    bool cycle = false;

    for (int i = 0; i < n; i++)
    {
        char a, b;
        cin >> a >> b;

        int x = a - 'A';
        int y = b - 'A';

        if (Find(x) == Find(y))
        {
            cycle = true;
        }
        else
        {
            Union(x, y);
        }
    }

    if (cycle)
        cout << "Cycle";
    else
        cout << "발견";

    return 0;
}
