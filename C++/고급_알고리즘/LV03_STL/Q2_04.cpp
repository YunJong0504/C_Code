#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int low = 1;
    int high = 50;

    for (int i = 0; i < n; i++)
    {
        int num;
        string answer;

        cin >> num >> answer;

        if (answer == "UP")
        {
            if (num + 1 > low)
                low = num + 1;
        }
        else if (answer == "DOWN")
        {
            if (num - 1 < high)
                high = num - 1;
        }
    }

    if (low > high)
    {
        cout << "ERROR" << endl;
    }
    else if (low == high)
    {
        cout << low << endl;
    }
    else 
    {
        cout << low << " ~ " << high << endl;
    }

    return 0;
}
