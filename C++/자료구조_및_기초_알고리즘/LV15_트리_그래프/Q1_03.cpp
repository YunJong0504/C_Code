#include <iostream>
using namespace std;

int coin[4] = { 35,17,7,1 };
int cnt[4] = {};

int main() 
{
    int change;
    std::cin >> change;

    for (int i = 0; i < 4; i++)
    {
        while (change >= coin[i])
        {
            change = change - coin[i];
            cnt[i]++;
        }
    }

    for (int i = 0; i < 4; i++)
    {
        std::cout << coin[i] << ":" << cnt[i] << "개" << std::endl;
    }

    return 0;
}
