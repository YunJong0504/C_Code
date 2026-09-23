#include <iostream>
using namespace std;

struct Node
{
    char data;
    Node* next;
};

Node* head = nullptr;
Node* tail = nullptr;

void push(char value)
{
    if (head == nullptr)
    {
        Node* p = new Node();
        p->data = value;
        head = p;
        tail = p;
    }
    else
    {
        tail->next = new Node();
        tail = tail->next;
        tail->data = value;
    }
}

void pop()
{
    Node* del = head;
    head = head->next;
    delete del;
}

void print()
{
    Node* p = head;
    while (p != nullptr)
    {
        std::cout << p->data << " ";
        p = p->next;
    }
}

int main()
{
    int a, b;
    std::cin >> a >> b;

    for (int i = 0; i < a; i++)
    {
        char ch;
        std::cin >> ch;
        push(ch);
    }

    for (int i = 0; i < b; i++)
    {
        pop();
    }

    print();

    return 0;
}
