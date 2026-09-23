#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() 
{
    string str;
    int cursor;
    std::cin >> str >> cursor;
    
    string cmd;
    std::cin >> cmd;

    for (int i = 0; i < cmd.length(); i++)
    {
        if (cmd[i] == 'R')
        {
            cursor++;
        }
        else if (cmd[i] == 'L')
        {
            cursor--;
        }
        else if (cmd[i] == 'D')
        {
            std::cout << cursor;
        }
    }

    return 0;
}
