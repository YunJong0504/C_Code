#include <iostream>
#include <string>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* mhead = nullptr;
Node* mtail = nullptr;

void AddNode(int data)
{
    if (mhead == nullptr)
    {
        mhead = new Node();
        mhead->data = data;
        mhead->next = nullptr;

        mtail = mhead;
    }
    else
    {
        mtail->next = new Node();
        mtail->next->data = data;
        mtail->next->next = nullptr;

        mtail = mtail->next;
    }
}

void EraseNode(int data)
{
    Node* p = mhead;
    Node* prev = nullptr;
    while (p != nullptr)
    {
        if (p->data == data)
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
        cout << p->data << " ";
        p = p->next;
    }
}

int main()
{
    int head[4] = {};
    for (int i = 0; i < 4; i++)
    {
        cin >> head[i];
        AddNode(head[i]);
    }
    int node;
    cin >> node;
    EraseNode(node);
    print();

    return 0;
}
