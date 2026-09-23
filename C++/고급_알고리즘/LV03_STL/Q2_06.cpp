#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int arr[10][10];
int temp[10][10];

int main() 
{
    int N, K;

    cin >> N >> K;

    for (int y = 0; y < N; y++) 
    {
        for (int x = 0; x < N; x++) 
        {
            cin >> arr[y][x];
        }
    }

    K = K % 4;

    for (int k = 0; k < K; k++) 
    {
        for (int y = 0; y < N; y++)
        {
            for (int x = 0; x < N; x++)
            {
                temp[x][N - 1 - y] = arr[y][x];
            }
        }

        for (int y = 0; y < N; y++)
        {
            for (int x = 0; x < N; x++) 
            {
                arr[y][x] = temp[y][x];
            }
        }
    }

    for (int y = 0; y < N; y++)
    {
        for (int x = 0; x < N; x++) 
        {
            cout << arr[y][x] << ' ';
        }
        cout << endl;
    }

    return 0;
}
