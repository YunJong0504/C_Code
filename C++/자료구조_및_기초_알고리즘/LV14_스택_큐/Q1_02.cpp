#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

struct Node
{
    char data;
    Node* next;
};

Node* head = nullptr;

void addNode(char value)
{
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;

    if (head == nullptr)
    {
        head = newNode;
    }
    else
    {
        Node* temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void print()
{
    Node* temp = head;

    while (temp != nullptr)
    {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    int input;
    std::cin >> input;
    for (int i = 0; i < 4; i++)
    {
        addNode((char)(input + i + 54));
    }

    print();

    return 0;
}
