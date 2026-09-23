#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    int* simData[5] = { &a, &b, &c, &d, &e };
    int min = INT_MAX;
    int max = INT_MIN;

    for (int i = 0; i < 5; i++)
    {
        if (*simData[i] < min)
        {
            min = *simData[i];
        }
        if (*simData[i] > max)
        {
            max = *simData[i];
        }
    }

    cout << "MAX:" << max << endl;
    cout << "MIN:" << min << endl;

    return 0;
}
