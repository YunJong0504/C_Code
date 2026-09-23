#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int board[10][10];
    int bit[10][10];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> board[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> bit[i][j];
        }
    }

    int count[10] = { 0 };

    int arr[100];
    int size = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (bit[i][j] == 1)
            {
                int num = board[i][j];

                arr[size] = num;
                size++;

                count[num]++;
            }
        }
    }

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (count[arr[i]] < count[arr[j]])
            {
                swap(arr[i], arr[j]);
            }
            else if (count[arr[i]] == count[arr[j]] &&
                arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i];

        if (i != size - 1)
            cout << " ";
    }
}
