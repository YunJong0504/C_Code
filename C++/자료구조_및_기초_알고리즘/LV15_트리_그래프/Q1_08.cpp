#include <iostream>
using namespace std;

int arr[3][3] = {};

int main()
{
    for (int y = 0; y < 3; y++)
    {
        for (int x = 0; x < 3; x++)
        {
            std::cin >> arr[y][x];
        }
    }

    int first = INT_MIN;
    int fy, fx;
    for (int y = 0; y < 3; y++)
    {
        for (int x = 0; x < 3; x++)
        {
            if (arr[y][x] > first)
            {
                first = arr[y][x];
                fy = y;
                fx = x;
            }
        }
    }

    int second = INT_MIN;
    int sy, sx;
    for (int y = 0; y < 3; y++)
    {
        for (int x = 0; x < 3; x++)
        {
            if (arr[y][x] > second && arr[y][x] < first)
            {
                second = arr[y][x];
                sy = y;
                sx = x;
            }
        }
    }

    std::cout << "첫번째:" << first << "(" << fy << "," << fx << ")" << std::endl;
    std::cout << "두번째:" << second << "(" << sy << "," << sx << ")" << std::endl;

    return 0;
}
