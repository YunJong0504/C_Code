#include <iostream>
#include <string>
using namespace std;

int main()
{
    char arr[4][4] = {};
    for (int y = 0; y < 4; y++)
    {
        for (int x = 0; x < 4; x++)
        {
            cin >> arr[y][x];
        }
    }

    int count[4] = {};
    for (int x = 0; x < 4; x++)
    {
        for (int y = 0; y < 4; y++)
        {
            if (arr[y][x] != '#')
            {
                count[x]++;
            }
        }
    }

    for (int i = 0; i < 4; i++)
    {
        cout << count[i] << " ";
    }

    return 0;
}
