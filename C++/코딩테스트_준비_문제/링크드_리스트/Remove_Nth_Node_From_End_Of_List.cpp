#include <iostream>
#include <string>
using namespace std;

struct Node
{
    char ch;
    Node* next;
};

Node* mhead = nullptr;
Node* mtail = nullptr;

void AddNode(char data)
{
    if (mhead == nullptr)
    {
        mhead = new Node();
        mhead->ch = data;
        mhead->next = nullptr;

        mtail = mhead;
    }
    else
    {
        mtail->next = new Node();
        mtail->next->ch = data;
        mtail->next->next = nullptr;

        mtail = mtail->next;
    }
}

void EraseNode(char data)
{
    Node* p = mhead;
    Node* prev = nullptr;
    while (p != nullptr)
    {
        if (p->ch == data)
        {
            if (prev != nullptr)
            {
                prev->next = p->next;
            }
            delete p;
            p = nullptr;
            break;
        }
        prev = p;
        p = p->next;
    }
}

void print()
{
    Node* p = mhead;
    while (p != nullptr)
    {
        cout << p->ch << " ";
        p = p->next;
    }
}

int main()
{
    char head[31] = {};
    cin >> head;
    int idx = strlen(head);
    int n;
    cin >> n;
    char num = head[idx - n];

    for (int i = 0; i < idx; i++)
    {
        AddNode(head[i]);
    }
    EraseNode(num);
    print();

    return 0;
}
