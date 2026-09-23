#include <iostream>
using namespace std;

char land[4][4] = {};
int direct[8][2] =
{
    -1, 0,
    1, 0,
    0, -1,
    0, 1,
    -1, -1,
    -1, 1,
    1, -1,
    1, 1
};

void wall(int y, int x)
{
    for (int i = 0; i < 8; i++)
    {
        int newY = y + direct[i][0];
        int newX = x + direct[i][1];
        if (newY >= 0 && newY <= 3 && newX >= 0 && newX <= 3)
        {
            land[newY][newX] = '@';
        }
    }
}

int main()
{
    for (int i = 0; i < 3; i++)
    {
        int y, x;
        std::cin >> y >> x;
        land[y][x] = '#';
    }

    for (int y = 0; y < 4; y++)
    {
        for (int x = 0; x < 4; x++)
        {
            if (land[y][x] == '#')
            {
                wall(y, x);
            }
        }
    }

    for (int y = 0; y < 4; y++)
    {
        for (int x = 0; x < 4; x++)
        {
            if (land[y][x] == 0)
                std::cout << '_';
            else
                std::cout << land[y][x];
        }
        std::cout << std::endl;
    }

    return 0;
}
