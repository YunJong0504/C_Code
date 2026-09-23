#include <iostream>
#include <string>
using namespace std;

int main()
{
    char arr[16] = {};
    cin >> arr;
    char str1[6] = {};
    char str2[6] = {};
    char str3[6] = {};

    for (int i = 0; i < 5; i++)
    {
        str1[i] = arr[i];
    }
    str1[5] = '\0';
    for (int i = 0; i < 5; i++)
    {
        str2[i] = arr[i + 5];
    }
    str2[5] = '\0';
    for (int i = 0; i < 5; i++)
    {
        str3[i] = arr[i + 10];
    }
    str3[5] = '\0';
    cout << str1 << endl;
    cout << str2 << endl;
    cout << str3 << endl;

    return 0;
}
