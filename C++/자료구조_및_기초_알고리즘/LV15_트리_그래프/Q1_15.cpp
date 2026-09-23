#include <iostream>
using namespace std;

int main()
{
    const int ROW = 5;
    const int COL = 4;

    int board[ROW][COL];

    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            cin >> board[i][j];
        }
    }

    for (int i = ROW - 1; i >= 0; i--)
    {
        bool full = true;

        for (int j = 0; j < COL; j++)
        {
            if (board[i][j] == 0)
            {
                full = false;
                break;
            }
        }

        if (full)
        {
            for (int k = i; k > 0; k--)
            {
                for (int j = 0; j < COL; j++)
                {
                    board[k][j] = board[k - 1][j];
                }
            }

            for (int j = 0; j < COL; j++)
            {
                board[0][j] = 0;
            }

            i++;
        }
    }

    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            cout << board[i][j];
            if (j != COL - 1)
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}
