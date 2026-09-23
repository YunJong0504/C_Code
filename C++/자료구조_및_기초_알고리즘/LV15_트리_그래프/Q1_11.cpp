#include <iostream>
using namespace std;

int num = 1;
int map[4][4] = {};

int direct[4][2] =
{
    -1, 0,
    1, 0,
    0, 1,
    0, -1
};

void mark(int y, int x)
{
    for (int i = 0; i < 4; i++)
    {
        int newY = y + direct[i][0];
        int newX = x + direct[i][1];

        if (map[newY][newX] == 0 && newY >= 0 && newY <= 3 && newX >= 0 && newX <= 3)
        {
            map[newY][newX] = num + 1;
        }
    }
}

int main()
{
    int y, x;
    std::cin >> y >> x;

    map[y][x] = num;

    for(int i = 0; i < 6; i++)
    {
        for (int y = 0; y < 4; y++)
        {
            for (int x = 0; x < 4; x++)
            {
                if (map[y][x] == num)
                {
                    mark(y, x);
                }
            }
        }
        num++;
    }

    for (int y = 0; y < 4; y++)
    {
        for (int x = 0; x < 4; x++)
        {
            std::cout << map[y][x] << " ";
        }
        std::cout << std::endl;
    }


    return 0;
}
