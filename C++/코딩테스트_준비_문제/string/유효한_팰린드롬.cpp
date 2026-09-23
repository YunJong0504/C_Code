#include <iostream>
#include <algorithm>
using namespace std;

bool Palindrome(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] += 32;
        }  
        if (!(s[i] >= 'a' && s[i] <= 'z') && !(s[i] >= '0' && s[i] <= '9'))
        {
            s.erase(i, 1);
            i--;
        }
    }
    int left = 0;
    int right = s.length() - 1;

    while (left < right)
    {
        if (s[left] != s[right])
        {
            return false;
        }
        left++;
        right--;
    }

    return true;
}

int main() 
{
    string s = "A man, a plan, a canal: Panama";

    bool result = Palindrome(s);

    if (result)
        std::cout << "true";
    else
        std::cout << "false";

    return 0;
}
