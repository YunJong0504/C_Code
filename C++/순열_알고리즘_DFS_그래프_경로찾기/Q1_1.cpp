#include <iostream>
using namespace std;

char oper[5] = { '!', '#', '$', '&', '^' };

int num[3];
int answer = 0;

int calculate(int a, int b, char op)
{
    if (op == '!')
    {
        return a + b * 2;
    }
    else if (op == '#')
    {
        return a - b * 3;
    }
    else if (op == '$')
    {
        return a + 10;
    }
    else if (op == '&')
    {
        return a + b * b;
    }
    else if (op == '^')
    {
        return 0;
    }

    return 0;
}

void backtracking(int depth, int value)
{
    if (depth == 2)
    {
        if (value >= 20)
        {
            answer++;
        }

        return;
    }

    for (int i = 0; i < 5; i++)
    {
        int nextValue;

        if (depth == 0)
        {
            nextValue = calculate(num[0], num[1], oper[i]);
        }
        else
        {
            nextValue = calculate(value, num[2], oper[i]);
        }

        backtracking(depth + 1, nextValue);
    }
}

int main()
{
    cin >> num[0] >> num[1] >> num[2];

    backtracking(0, 0);

    cout << answer << endl;

    return 0;
}
