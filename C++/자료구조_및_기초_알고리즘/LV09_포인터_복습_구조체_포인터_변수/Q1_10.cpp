#include <iostream>
#include <string>
using namespace std;

int main()
{
    char str[10] = {};
    cin >> str;
    int index[4] = {};
    for (int i = 0; i < 4; i++)
    {
        cin >> index[i];
    }

    char* ptrs[4] = {};
    for (int i = 0; i < 4; i++)
    {
        ptrs[i] = &str[index[i]];
    }

    for (int i = 0; i < 4; i++)
    {
        cout << *ptrs[i];
    }

    return 0;
}
