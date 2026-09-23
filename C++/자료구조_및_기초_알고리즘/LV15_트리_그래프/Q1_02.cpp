#include <iostream>
using namespace std;

struct ABC
{
    int data[4];
    int x;
};

int main() 
{
    ABC a, b;
    a.data[0] = 1;
    a.data[1] = 2;
    a.data[2] = 3;
    a.data[3] = 4;
    a.x = 10;

    b.data[0] = 7;
    b.data[1] = 8;
    b.data[2] = 9;
    b.data[3] = 10;
    b.x = 15;

    ABC* p = &a;
    ABC* g = &b;

    for (int i = 0; i < 4; i++)
    {
        std::cout << p->data[i] << " ";
    }
    std::cout << std::endl;
    std::cout << p->x << std::endl;
    for (int i = 0; i < 4; i++)
    {
        std::cout << g->data[i] << " ";
    }
    std::cout << std::endl;
    std::cout << g->x << std::endl;

    return 0;
}
