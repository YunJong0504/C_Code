#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main() 
{
    queue<char> q;

    q.push('B');
    q.push('I');
    q.push('A');
    q.push('H');

    while (!q.empty())
    {
        for (int i = 0; i < 4; i++)
        {
            char temp = q.front();
            q.pop();
            q.push(temp);
        }

        std::cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
