#include <iostream>
using namespace std;

struct Node
{
    char ch;
    int n;
    Node* next;
};

Node* head = nullptr;

void addNode(char ch, int n)
{
    Node* newNode = new Node();
    newNode->ch = ch;
    newNode->n = n;
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
        std::cout << temp->ch << " ";
        temp = temp->next;
    }
    std::cout << std::endl;

    temp = head;
    while (temp != nullptr)
    {
        std::cout << temp->n << " ";
        temp = temp->next;
    }
}

int main()
{
    char arr[7] = "ABCDEF";

    int input;
    std::cin >> input;

    for (int i = 0; i < input; i++)
    {
        addNode(arr[i], i + 1);
    }

    print();

    return 0;
}
