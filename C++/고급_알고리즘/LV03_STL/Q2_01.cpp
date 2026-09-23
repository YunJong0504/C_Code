#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string arr[6] = { "ABCD", "ABCE", "AGEH", "EIEI", "FEQE", "ABAD" };

int main()
{
    string input;
    std::cin >> input;

    int cnt = 0;

    for (int i = 0; i < 6; i++)
    {
        bool match = true;

        for (int j = 0; j < 4; j++)
        {
            if (input[j] != '?' && input[j] != arr[i][j])
            {
                match = false;
                break;
            }
        }

        if (match)
            cnt++;
    }

    std::cout << cnt << std::endl;

    return 0;
}
