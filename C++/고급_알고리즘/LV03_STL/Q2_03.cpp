#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    cin >> str;

    bool board[3][6] = {};

    for (int k = 0; k < str.length(); k++)
    {
        char ch = str[k];

        int num = ch - 'A';
        int y = num / 6;
        int x = num % 6;

        board[y][x] = !board[y][x];

        if (y - 1 >= 0)
            board[y - 1][x] = !board[y - 1][x];

        if (y + 1 < 3)
            board[y + 1][x] = !board[y + 1][x];

        if (x - 1 >= 0)
            board[y][x - 1] = !board[y][x - 1];

        if (x + 1 < 6)
            board[y][x + 1] = !board[y][x + 1];
    }

    for (int y = 0; y < 3; y++)
    {
        for (int x = 0; x < 6; x++) 
        {
            if (board[y][x])
                cout << '#';
            else
                cout << char('A' + y * 6 + x);
        }
        cout << endl;
    }

    return 0;
}
