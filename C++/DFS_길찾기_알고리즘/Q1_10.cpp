#include <iostream>
using namespace std;

int answer = 0;

void backtracking(int row, int col)
{
    if (col == 8)
    {
        if (row == 1)
            answer++;

        return;
    }

    if (row - 1 >= 0)
    {
        backtracking(row - 1, col + 1);
    }

    backtracking(row, col + 1);

    if (row + 1 < 3)
    {
        backtracking(row + 1, col + 1);
    }
}

int main()
{
    char start;
    cin >> start;

    int row;

    if (start == 'A')
        row = 0;
    else if (start == 'B')
        row = 1;
    else
        row = 2;

    backtracking(row, 0);

    cout << answer;

    return 0;
}
