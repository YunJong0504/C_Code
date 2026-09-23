#include <iostream>
#include <string>
using namespace std;

char OX[2] = { 'O','X' };
char path[3] = {};

void Game(int n)
{
    if (n == 3)
    {
        int win = 0;
        for (int i = 0; i < 3; i++)
        {
            if (path[i] == 'O')
            {
                win++;
            }
        }

        if (win == 3)
            cout << "3승(" << path << ")" << endl;
        else if (win == 2)
            cout << "2승1패(" << path << ")" << endl;
        else if (win == 1)
            cout << "1승2패(" << path << ")" << endl;
        else
            cout << "3패(" << path << ")" << endl;

        return;
    }

    for (int i = 0; i < 2; i++)
    {
        path[n] = OX[i];
        Game(n + 1);
        path[n] = 0;
    }
}

int main()
{
    Game(0);

    return 0;
}
