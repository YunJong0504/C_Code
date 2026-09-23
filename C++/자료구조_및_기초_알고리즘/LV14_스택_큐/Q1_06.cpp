#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int num = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            num = num * 10 + (str[i] - '0');
        }
    }

    cout << num + 5;

    return 0;
}
