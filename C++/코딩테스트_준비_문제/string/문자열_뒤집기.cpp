#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    char s[] = "Hello";

    int left = 0;
    int right = strlen(s) - 1;

    while (left < right)
    {
        swap(s[left], s[right]);

        left++;
        right--;
    }

    std::cout << s;

    return 0;
}
