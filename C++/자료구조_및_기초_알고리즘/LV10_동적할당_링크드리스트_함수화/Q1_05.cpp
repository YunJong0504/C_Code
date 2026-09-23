#include <iostream>
#include <string>
using namespace std;

struct Node
{
    int num;
    Node* next;
};

int main()
{
    Node* head;
    head = new Node();
    head->next = new Node();
    head->next->next = new Node();
    head->next->next->next = new Node();
    head->next->next->next->next = nullptr;

    head->num = 3;
    head->next->num = 5;
    head->next->next->num = 4;
    head->next->next->next->num = 2;

    Node* p = head;

    while (true)
    {
        if (p == nullptr)
            break;

        cout << p->num;
        p = p->next;
    }

    return 0;
}
