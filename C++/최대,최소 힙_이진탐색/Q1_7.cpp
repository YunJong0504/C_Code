#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main()
{
    priority_queue<char> s;
    string str;
    cin >> str;

    for (int i = 0; i < str.length(); i++)
    {
		s.push(str[i]);
    }
    for (int i = 0; i < str.length(); i++)
    {
		cout << s.top();
		s.pop();
    }

    return 0;
}
