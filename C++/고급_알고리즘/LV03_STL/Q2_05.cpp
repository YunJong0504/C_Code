#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int dist[8] = { 0, 3, 2, 1, 3, 2, 0, 1 };
int path[8];
int cnt = 0;

void dfs(int index) 
{
    path[cnt++] = index;

    if (index == 5)
    {
        for (int i = cnt - 1; i >= 0; i--) {
            cout << path[i] << "번" << endl;
        }
        return;
    }

    if (index == 3 || index == 5 || index == 7)
        dfs(index - dist[index]);
    else
        dfs(index + dist[index]);

    cnt--;
}

int main() 
{
    int start;
    cin >> start;

    dfs(start);

    return 0;
}
