#include <iostream>
#include <string>
using namespace std;

struct NODE
{
    int age;
    NODE* next1;
    NODE* next2;
};

int main()
{
    NODE head, simson, woman1, woman2, man1, man2, man3;
    head.next1 = &simson;
    simson.age = 20;
    simson.next1 = &woman1;
    simson.next2 = &woman2;

    woman1.age = 29;
    woman1.next1 = &man1;
    woman1.next2 = &man2;

    woman2.age = 30;
    woman2.next1 = &woman1;
    woman2.next2 = &man3;

    woman1.next1->age = 25;
    woman1.next2->age = 40;

    woman2.next2->age = 38;

    return 0;
}
