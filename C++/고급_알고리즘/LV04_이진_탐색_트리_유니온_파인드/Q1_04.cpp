#include <iostream>
using namespace std;

int tree[100];

void insert(int index, int value)
{
    if (tree[index] == 0)
    {
        tree[index] = value;
        return;
    }

    if (value < tree[index])
    {
        insert(index * 2 + 1, value);
    }
    else if (value > tree[index])
    {
        insert(index * 2 + 2, value);
    }
}

bool find(int index, int value)
{
    if (tree[index] == 0)
        return false;

    if (tree[index] == value)
        return true;

    if (value < tree[index])
        return find(index * 2 + 1, value);

    return find(index * 2 + 2, value);
}

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;

        insert(0, num);
    }

    for (int i = 1; i <= 6; i++)
    {
        if (find(0, i))
            cout << i << ":O" << endl;
        else
            cout << i << ":X" << endl;
    }

    return 0;
}
