#include <iostream>
#include <queue>
using namespace std;

char tree[] = " 32516 7      48";

void dfs(int now, int level)
{
    if (tree[now] == ' ' || now >= 17)
        return;

    dfs(now * 2, level + 1);
    dfs(now * 2 + 1, level + 1);
    std::cout << tree[now] << " ";
}

int main()
{
	dfs(1, 0);

    return 0;
}
