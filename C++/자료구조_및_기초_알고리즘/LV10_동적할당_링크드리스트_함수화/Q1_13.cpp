#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num[6] = {};
    char com[6] = {};
    for (int i = 0; i < 6; i++)
    {
        cin >> num[i];
    }
    for (int i = 0; i < 6; i++)
    {
        cin >> com[i];
    }

    int min = INT_MIN;
    int max = INT_MAX;
    for (int i = 0; i < 6; i++)
    {
        if (com[i] == 'm')
        {
            int MIN = INT_MAX;
            for (int j = 0; j < 6; j++)
            {
                if (num[j] < MIN && num[j] > min)
                {
                    MIN = num[j];
                }
            }
            min = MIN;
            cout << MIN;
        }
        else if (com[i] == 'x')
        {
            int MAX = INT_MIN;
            for (int j = 0; j < 6; j++)
            {
                if (num[j] > MAX && num[j] < max)
                {
                    MAX = num[j];
                }
            }
            max = MAX;
            cout << MAX;
        }
    }

    return 0;
}
