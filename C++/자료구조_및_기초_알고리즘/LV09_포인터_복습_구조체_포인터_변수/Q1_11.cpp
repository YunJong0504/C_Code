#include <iostream>
#include <string>
using namespace std;

int castle[4][4] =
{
    0,0,0,0,
    0,1,1,0,
    2,2,3,0,
    1,3,3,1
};

int main()
{
    for (int y = 0; y < 3; y++)
    {
        for (int x = 0; x < 4; x++)
        {
            if (castle[y][x] > 0)
            {
                if (castle[y][x] > castle[y + 1][x])
                {
                    cout << "안전하지 않은 성" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "안전한 성" << endl;

    return 0;
}
