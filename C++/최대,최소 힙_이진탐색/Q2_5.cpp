#include <iostream>
#include <queue>
using namespace std;

int main()
{
    string str;
    cin >> str;

    string food[5] =
    {
        "chicken",
        "pizza",
        "jockbal",
        "bread",
        "samhap"
    };

    for (int i = 0; i < str.length(); i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i + food[j].length() <= str.length())
            {
                bool same = true;

                for (int k = 0; k < food[j].length(); k++)
                {
                    if (tolower(str[i + k]) != tolower(food[j][k]))
                    {
                        same = false;
                        break;
                    }
                }

                if (same)
                {
                    for (int k = 0; k < food[j].length(); k++)
                    {
                        str[i + k] = '#';
                    }

                    i += food[j].length() - 1;
                    break;
                }
            }
        }
    }

    cout << str;

    return 0;
}
