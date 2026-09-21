#include <iostream>
using namespace std;

int main()
{
    int arr[9];

    for (int i = 0; i < 9; i++)
    {
        cin >> arr[i];
    }

    int maxValue = -9223372036854775807LL;
    int count = 0;

    for (int i = 0; i < 7; i++)
    {
        for (int j = i + 1; j < 8; j++)
        {
            for (int k = j + 1; k < 9; k++)
            {
                int result = arr[i] * arr[j] * arr[k];

                if (result > maxValue)
                {
                    maxValue = result;
                    count = 1;
                }
                else if (result == maxValue)
                {
                    count++;
                }
            }
        }
    }

    cout << count << endl;

    return 0;
}
