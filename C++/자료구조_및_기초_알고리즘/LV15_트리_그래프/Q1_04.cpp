#include <iostream>
using namespace std;

char arr[11] = {};
int idx[256] = {};
int cnt = 0;

int main() 
{
    std::cin >> arr;

    int i = 0;
    while (arr[i] != 0)
    {
        idx[arr[i]]++;
        i++;
    }

    for (int i = 0; i < 256; i++)
    {
        if (idx[i] != 0)
        {
            cnt++;
        }
    }

    std::cout << cnt << "종류";

    return 0;
}
