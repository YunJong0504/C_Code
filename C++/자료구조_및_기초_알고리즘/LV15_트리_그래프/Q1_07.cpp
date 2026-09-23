#include <iostream>
using namespace std;

int table[3][4] =
{
    0,0,0,0,
    1,0,0,0,
    1,0,0,0
};

int main()
{
    for (int i = 0; i < 4; i++)
    {
        std::cin >> table[0][i];
    }

    for (int y = 1; y < 3; y++)
    {
        for (int x = 1; x < 4; x++)
        {
            table[y][x] = table[y - 1][x] + table[y][x - 1];
        }
    }

    for (int y = 0; y < 3; y++)
    {
        for (int x = 0; x < 4; x++)
        {
            std::cout << table[y][x] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
