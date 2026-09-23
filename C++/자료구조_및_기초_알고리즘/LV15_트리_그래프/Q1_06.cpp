#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{
    char str[4][11];

    for (int i = 0; i < 4; i++) 
    {
        cin >> str[i];
    }

    int maxIdx = 0, minIdx = 0;

    for (int i = 1; i < 4; i++) 
    {
        if (strlen(str[i]) > strlen(str[maxIdx]))
            maxIdx = i;

        if (strlen(str[i]) < strlen(str[minIdx]))
            minIdx = i;
    }
    
    for (int i = 0; str[maxIdx][i] != '\0'; i++) 
    {
        str[maxIdx][i] = tolower(str[maxIdx][i]);
    }
    
    for (int i = 0; str[minIdx][i] != '\0'; i++) 
    {
        str[minIdx][i] = tolower(str[minIdx][i]);
    }

    for (int i = 0; i < 4; i++) {
        cout << str[i] << endl;
    }

    return 0;
}
