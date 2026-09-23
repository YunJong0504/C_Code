#include <iostream>
#include <string>
using namespace std;

struct NODE
{
    int x;
    NODE* next;
};

int main()
{
    NODE a, b, c;
    a.x = 3;
    a.next = &b;
    
    a.next->x = 5;
    a.next->next = &c;

    a.next->next->x = 4;

    return 0;
}
