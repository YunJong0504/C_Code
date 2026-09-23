#include <iostream>
using namespace std;

int parent[26];

int Find(int x)
{
    if (parent[x] == x)
        return x;

    return parent[x] = Find(parent[x]);
}

bool Union(int a, int b)
{
    a = Find(a);
    b = Find(b);

    if (a == b)
        return false;

    parent[b] = a;

    return true;
}

int main()
{
    for (int i = 0; i < 26; i++)
    {
        parent[i] = i;
    }

    int groupCount = 4;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        char a, b;
        cin >> a >> b;

        int x = a - 'A';
        int y = b - 'A';

        if (Union(x, y))
        {
            groupCount--;
        }
    }

    cout << groupCount;

    return 0;
}
