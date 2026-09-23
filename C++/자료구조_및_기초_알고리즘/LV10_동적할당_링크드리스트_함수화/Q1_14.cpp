#include <iostream>
#include <string>
using namespace std;

char NUM[7] = "123456";
char path[7] = "";

void Dice(int n, int num)
{
    if (n == num)
    {
        cout << path << endl;
        return;
    }
    for (int i = 0; i < 6; i++)
    {
        path[n] = NUM[i];
        Dice(n + 1, num);
        path[n] = 0;
    }
}

int main()
{
    int num;
    cin >> num;

    Dice(0, num);

    return 0;
}
