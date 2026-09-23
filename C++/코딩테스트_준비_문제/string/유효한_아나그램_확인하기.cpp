#include <iostream>
#include <algorithm>
using namespace std;

bool isAnagram(string s, string t)
{
    if (s.length() != t.length())
    {
        return false;
    }

    int sData[256] = {};
    int tData[256] = {};

    for (int i = 0; i < s.length(); i++)
    {
        sData[s[i]]++;
        tData[t[i]]++;
    }

    for (int i = 0; i < 256; i++)
    {
        if (sData[i] != tData[i])
        {
            return false;
        }
    }

    return true;
}

int main() 
{
    string s = "anagram";
    string t = "nagaram";

    bool result = isAnagram(s, t);

    if (result)
        std::cout << "true";
    else
        std::cout << "false";

    return 0;
}
