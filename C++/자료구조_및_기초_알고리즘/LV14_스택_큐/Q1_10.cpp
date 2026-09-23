#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() 
{
    string str;
    cin >> str;

    stack<char> s;
    bool check = true;

    for (int i = 0; i < str.length(); i++) 
    {
        if (str[i] == '<') 
        {
            s.push('<');
        }
        else if (str[i] == '>') 
        {
            if (s.empty()) 
            {
                check = false;
                break;
            }
            s.pop();
        }
    }

    if (check && s.empty())
        cout << "정상";
    else
        cout << "비정상";

    return 0;
}
