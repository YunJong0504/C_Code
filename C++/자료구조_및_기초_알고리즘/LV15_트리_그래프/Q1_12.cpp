#include <iostream>
using namespace std;

int main()
{
    int graph[5][5] =
    {
        0,0,0,0,1,
        1,0,0,0,0,
        0,1,0,0,0,
        0,1,0,0,0,
        0,0,0,0,0
    };
    
    string name[5] = { "Amy","Bob","Chloe","Diane","Edger" };

    int max = 0;
    int idx = 0;

    for (int x = 0; x < 5; x++)
    {
        int cnt = 0;
        for (int y = 0; y < 5; y++)
        {
            if (graph[y][x] == 1)
            {
                cnt++;
            }
        }

        if (cnt > max)
        {
            max = cnt;
            idx = x;
        }
    }

    std::cout << name[idx];

    return 0;
}
