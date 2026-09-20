#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

int arr[5] = {};
int used[5] = {};
int path[5] = {};

int MAX = 0;
int MIN = 9999;

void dfs(int n, int result)
{
    if (n == 3)
    {
        if (result > MAX)
            MAX = result;
        else if (result < MIN)
            MIN = result;

        return;
    }

    for (int i = 0; i < 5; i++)
    {
        if (used[i] == 1)
            continue;
        path[n + 1] = arr[i];
        used[i] = 1;
        dfs(n + 1, result * 10 + arr[i]);
        used[i] = 0;
        path[n + 1] = 0;
    }
}

int main()
{
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    dfs(0, 0);

    cout << "MAX:" << MAX << endl;
    cout << "MIN:" << MIN << endl;

    return 0;
}
