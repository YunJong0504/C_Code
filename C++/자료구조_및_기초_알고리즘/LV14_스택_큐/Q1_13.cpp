#include <iostream>
#include <algorithm>
using namespace std;

int A[3][3] =
{
    2,6,3,
    7,1,1,
    3,4,2
};

int B[2][4] =
{
    6,4,2,4,
    1,1,5,8
};

int C[2][3] =
{
    9,2,3,
    4,2,1
};

int main() 
{
    int a[9], b[8], c[6];
    int idx = 0;

    for (int y = 0; y < 3; y++)
    {
        for (int x = 0; x < 3; x++)
        {
            a[idx++] = A[y][x];
        }
    }
    idx = 0;
    for (int y = 0; y < 2; y++)
    {
        for (int x = 0; x < 4; x++)
        {
            b[idx++] = B[y][x];
        }
    }
    idx = 0;
    for (int y = 0; y < 2; y++)
    {
        for (int x = 0; x < 3; x++)
        {
            c[idx++] = C[y][x];
        }
    }

    sort(a, a + 9);
    sort(b, b + 8);
    sort(c, c + 6);

    int result[3][3] = {};

    result[0][0] = a[8];
    result[0][1] = a[7];
    result[0][2] = a[6];

    result[1][0] = b[0];
    result[1][1] = b[1];
    result[1][2] = b[2];

    result[2][0] = c[0];
    result[2][1] = c[1];
    result[2][2] = c[5];

    for (int y = 0; y < 3; y++)
    {
        for (int x = 0; x < 3; x++)
        {
            std::cout << result[y][x] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
