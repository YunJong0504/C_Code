#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    std::cin >> str;

    while (true)
    {
        std::cout << str << std::endl;

        bool finished = true;

        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] != '_')
            {
                finished = false;
                break;
            }
        }

        if (finished)
            break;

        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == 'A')
            {
                str[i] = '_';
            }
            else if (str[i] != '_')
            {
                str[i]--;
            }
        }
    }

    return 0;
}
