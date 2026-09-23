#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int arr[4][8];

int getSum(int y1, int x1, int y2, int x2)
{
    int sum = 0;

    for (int y = y1; y <= y2; y++)
    {
        for (int x = x1; x <= x2; x++) 
        {
            if (arr[y][x] == 0)
                return 0;

            sum += arr[y][x];
        }
    }

    return sum;
}

int main()
{
    for (int y = 0; y < 4; y++)
    {
        for (int x = 0; x < 8; x++) 
        {
            cin >> arr[y][x];
        }
    }

    int maxValue = 0;

    for (int y1 = 0; y1 < 4; y1++) 
    {
        for (int x1 = 0; x1 < 8; x1++)
        {
            for (int y2 = y1; y2 < 4; y2++)
            {
                for (int x2 = x1; x2 < 8; x2++)
                {

                    int sum = getSum(y1, x1, y2, x2);

                    if (sum > maxValue)
                        maxValue = sum;
                }
            }
        }
    }

    cout << maxValue << endl;

    return 0;
}
