#include <iostream>
#include <algorithm>
using namespace std;

int first(string s)
{
    int count[256] = {};

    for (int i = 0; i < s.length(); i++)
    {
        count[s[i]]++;
    }

    for (int i = 0; i < s.length(); i++)
    {
        if (count[s[i]] == 1)
        {
            return i;
        }
    }

    return -1;
}

int main() 
{
    string s = "leetcode";

    std::cout << first(s);

    return 0;
}
