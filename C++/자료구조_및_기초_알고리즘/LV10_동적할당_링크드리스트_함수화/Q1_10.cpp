#include <iostream>
#include <string>
using namespace std;

int main()
{
    char str[10] = {};
    cin >> str;
    if (strlen(str) % 2 == 1)
    {
        cout << "짝이안맞음";
        return 0;
    }
    if (str[0] != 'B')
    {
        cout << "짝이안맞음";
        return 0;
    }
    int countB = 0;
    int countF = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'B')
            countB++;
        else if (str[i] == 'F')
            countF++;
    }
    if (countB != countF)
    {
        cout << "짝이안맞음";
        return 0;
    }
    cout << "짝이맞음";

    return 0;
}
