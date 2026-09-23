#include <iostream>
#include <vector>
using namespace std;

int maxProfit(int price[])
{
    int profit = 0;

    for (int i = 1; i < 6; i++)
    {
        if (price[i] > price[i - 1])
        {
            profit += price[i] - price[i - 1];
        }
    }

    return profit;
}

int main()
{
    int price[7] = { 7,1,5,3,6,4 };

    std::cout << "최대 이익: " << maxProfit(price);

    return 0;
}
