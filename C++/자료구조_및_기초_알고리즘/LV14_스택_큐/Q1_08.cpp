#include <iostream>
#include <string>
using namespace std;

int headidx = 0;
int tailidx = 0;

int queue[10] = {};

void push(int data)
{
    queue[tailidx] = data;
    tailidx++;
}

void pop()
{
    std::cout << queue[headidx];
    queue[headidx++] = 0;

    if (headidx == tailidx)
    {
        headidx = 0;
        tailidx = 0;
    }
}

int main()
{
    int input;
    std::cin >> input;

    for (int i = 0; i < input; i++)
    {
        push(1);
        push(2);
        push(3);
        pop();
        pop();
        pop();
    }

    return 0;
}
