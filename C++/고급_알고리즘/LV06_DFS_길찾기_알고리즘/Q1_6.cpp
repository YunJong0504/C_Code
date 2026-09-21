#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cin >> str;

    string word[5] = {
        "BTS",
        "SBS",
        "BS",
        "CBS",
        "SES"
    };

    int n = str.length();

    int dp[31];

    for (int i = 0; i <= n; i++)
    {
        dp[i] = 100;
    }

    dp[0] = 0;

    for (int i = 0; i < n; i++)
    {
        if (dp[i] == 100)
            continue;

        for (int j = 0; j < 5; j++)
        {
            int len = word[j].length();

            if (i + len <= n)
            {
                bool same = true;

                for (int k = 0; k < len; k++)
                {
                    if (str[i + k] != word[j][k])
                    {
                        same = false;
                        break;
                    }
                }

                if (same)
                {
                    if (dp[i + len] > dp[i] + 1)
                    {
                        dp[i + len] = dp[i] + 1;
                    }
                }
            }
        }
    }

    cout << dp[n];

    return 0;
}
