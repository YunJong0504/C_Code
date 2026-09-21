#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int left = 0;
    int right = s.length() - 1;
    int index = 0;

    while (left <= right)
    {
        int mid = (left + right) / 2;

        if (s[mid] == '#')
        {
            index = mid;
            left = mid + 1;
        }
        else if (s[mid] == '_')
        {
            right = mid - 1;
        }
    }

    cout << (index + 1) * 10 << "%";

    return 0;
}
