#include <iostream>
#include <string>
using namespace std;

struct box
{
    int x;
    char y;
};

int headidx = 0;
int tailidx = 0;
int num = 1;
char alp = 'A';

box queue[10] = {};

void push()
{
    queue[tailidx].x = num++;
    queue[tailidx].y = alp++;
    tailidx++;
}

void pop()
{
    std::cout << queue[headidx].x << " " << queue[headidx].y << std::endl;
    queue[headidx].x = 0;
    queue[headidx].y = 0;
    headidx++;
}

int main()
{
    int input;
    std::cin >> input;

    for (int i = 0; i < input; i++)
    {
        push();
    }
    for (int i = 0; i < input; i++)
    {
        pop();
    }

    return 0;
}
