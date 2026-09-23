#include <iostream>
using namespace std;

int main()
{
    int graph[4][4] = {};

    for (int y = 0; y < 4; y++)
    {
        for (int x = 0; x < 4; x++)
        {
            std::cin >> graph[y][x];
        }
    }

    int MAX = 0;
    int idx = 0;

    for (int y = 0; y < 4; y++)
    {
        int cnt = 0;
        for (int x = 0; x < 4; x++)
        {
            if (graph[y][x] == 1)
            {
                cnt++;
            }
        }

        if (cnt > MAX)
        {
            MAX = cnt;
            idx = y;
        }
    }

    std::cout << (char)(idx + 'A');


    return 0;
}
