#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    cin >> str;

    bool check[26] = {};

    for (int i = 0; i < str.length(); i++)
    {
        check[str[i] - 'A'] = true;
    }

    char alphabet[26];
    int size = 0;

    for (int i = 0; i < 26; i++)
    {
        if (check[i])
        {
            alphabet[size] = 'A' + i;
            size++;
        }
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            for (int k = j; k < size; k++)
            {
                cout << alphabet[i] << alphabet[j] << alphabet[k] << endl;
            }
        }
    }

    return 0;
}
