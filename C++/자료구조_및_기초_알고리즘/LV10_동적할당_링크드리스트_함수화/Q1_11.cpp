#include <iostream>
#include <string>
using namespace std;

char arr[3][3] =
{
    {'_','5','4'},
    {'3','_','_'},
    {'_','_','1'}
};

int main()
{
    char result[3][3] = {};
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int x = 0; x < 3; x++)
            {
                if (y == 0 && x == 0)
                    result[0][2] = arr[y][x];
                else if (y == 0 && x == 1)
                    result[1][2] = arr[y][x];
                else if (y == 0 && x == 2)
                    result[2][2] = arr[y][x];
                else if (y == 1 && x == 0)
                    result[0][1] = arr[y][x];
                else if (y == 1 && x == 1)
                    result[1][1] = arr[y][x];
                else if (y == 1 && x == 2)
                    result[2][1] = arr[y][x];
                else if (y == 2 && x == 0)
                    result[0][0] = arr[y][x];
                else if (y == 2 && x == 1)
                    result[1][0] = arr[y][x];
                else if (y == 2 && x == 2)
                    result[2][0] = arr[y][x];
            }
        }
        for (int y = 0; y < 3; y++)
        {
            for (int x = 0; x < 3; x++)
            {
                arr[y][x] = result[y][x];
            }
        }
    }

    for (int y = 0; y < 3; y++)
    {
        for (int x = 0; x < 3; x++)
        {
            cout << result[y][x];
        }
        cout << endl;
    }

    return 0;
}
