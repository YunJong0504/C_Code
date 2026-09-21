#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;

    for (int i = 0; i < 5; i++)
    {
        cin >> s;

        int n = s.length();

        int mid = n / 2;

        int left = 0;
        int right = mid;

        while (left < right)
        {
            int m = (left + right) / 2;

            if (s[m] == '*')
            {
                right = m;
            }
            else
            {
                left = m + 1;
            }
        }

        int start = left;

        left = mid;
        right = n - 1;

        while (left < right)
        {
            int m = (left + right + 1) / 2;

            if (s[m] == '*')
            {
                left = m;
            }
            else
            {
                right = m - 1;
            }
        }

        int end = left;

        int length = end - start + 1;

        cout << length << endl;
    }

    return 0;
}
