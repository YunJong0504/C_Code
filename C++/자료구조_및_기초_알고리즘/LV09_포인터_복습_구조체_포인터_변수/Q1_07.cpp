#include <iostream>
#include <string>
using namespace std;

void Mark(int y, int x, int arr[5][5])
{
    arr[y][x]++;
}

int main()
{
    int arr[5][5] = {};
    for (int i = 0; i < 6; i++)
    {
        int y, x;
        cin >> y >> x;
        Mark(y, x, arr);
    }

    for (int y = 0; y < 5; y++)
    {
        for (int x = 0; x < 5; x++)
        {
            if (arr[y][x] > 1)
            {
                cout << "중복된좌표발견" << endl;
                return 0;
            }
        }
    }
    cout << "중복없음" << endl;

    return 0;
}
