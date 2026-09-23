#include <iostream>
using namespace std;

char value[8] = "2103546";
char path[8] = {};

int map[7][7] = 
{
    0,1,1,1,0,0,0, //2
    0,0,0,0,1,0,0, //1
    0,0,0,0,0,1,1, //0
    0,0,0,0,0,0,0, //3
    0,0,0,0,0,0,0, //5
    0,0,0,0,0,0,0, //4
    0,0,0,0,0,0,0, //6
};

void run(int n, int level)
{
    if (path[level - 1] == '0')
        std::cout << path[level] << " ";

    for (int i = 0; i < 7; i++)
    {
        if (map[n][i] == 1)
        {
            path[level + 1] = value[i];
            if (path[level + 1] == '0')
            {
                std::cout << "boss:" << path[level] << std::endl;
                std::cout << "under:";
            }
            run(i, level + 1);
            path[level + 1] = 0;
        }
    }
}

int main()
{
    path[0] = value[0];
    run(0, 0);

    return 0;
}
