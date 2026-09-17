#include <iostream>
using namespace std;

int price[5] = { 500, 300, 700, 400, 600 };
int point[5] = { 30, 40, 10, 20, 30 };

int n;
int selected[5];

int maxPoint = 0;

void combination(int start, int depth)
{
    if (depth == n)
    {
        int totalPrice = 0;
        int totalPoint = 0;

        for (int i = 0; i < n; i++)
        {
            totalPrice += price[selected[i]];
            totalPoint += point[selected[i]];
        }

        int quantity = 10000 / totalPrice;

        int result = quantity * totalPoint;

        if (result > maxPoint)
        {
            maxPoint = result;
        }

        return;
    }

    for (int i = start; i < 5; i++)
    {
        selected[depth] = i;

        combination(i + 1, depth + 1);
    }
}

int main()
{
    cin >> n;

    combination(0, 0);

    cout << maxPoint << endl;

    return 0;
}
