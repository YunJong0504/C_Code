#include <iostream>
#include <string>
using namespace std;

struct Node
{
    char ch;
    Node* next;
};

Node* head = nullptr;
Node* tail = nullptr;

void AddNode(char data)
{
    if (head == nullptr)
    {
        head = new Node();
        head->ch = data;
        head->next = nullptr;

        tail = head;
    }
    else
    {
        tail->next = new Node();
        tail->next->ch = data;
        tail->next->next = nullptr;

        tail = tail->next;
    }
}

int main()
{
    char str[5] = {};
    for (int i = 0; i < 5; i++)
    {
        cin >> str[i];
    }
    for (int i = 0; i < 5; i++)
    {
        AddNode(str[i]);
    }

    cout << tail->ch;

    return 0;
}
