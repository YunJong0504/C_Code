#include <iostream>
#include <string>
using namespace std;

char path[5] = "";
char card[5] = "ABCD";
int visited[5] = {};

void recursion(int n, int level)
{
    if (n == level)
    {
        std::cout << path << std::endl;
        return;
    }

    for (int i = 0; i < 4; i++)
    {
        if (visited[i] == 1)
            continue;

        visited[i] = 1;
        path[n] = card[i];
        recursion(n + 1, level);

        path[n] = 0;
        visited[i] = 0;
    }
}

int main()
{
    int input;
    std::cin >> input;

    recursion(0, input);

    return 0;
}
