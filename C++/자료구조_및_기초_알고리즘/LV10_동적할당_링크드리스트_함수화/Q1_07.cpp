#include <iostream>
#include <string>
using namespace std;

struct Node
{
    string name;
    Node* love1;
    Node* love2;
};

int main()
{
    Node* head = new Node;

    //boss
    head->name = "boss";
    head->love1 = new Node;
    head->love2 = new Node;

    //son
    head->love2->name = "son";
    head->love2->love1 = new Node;
    head->love2->love2 = new Node;

    //wife
    head->love1->name = "wife";
    head->love1->love1 = head;
    head->love1->love2 = head->love2;

    //girlfriend
    head->love2->love1->name = "girlfriend";
    head->love2->love1->love1 = head->love2;
    head->love2->love1->love2 = head->love2->love2;

    //boyfriend
    head->love2->love2->name = "boyfriend";
    head->love2->love2->love1 = head->love2->love1;
    head->love2->love2->love2 = nullptr;

    cout << head->love2->love1->name << endl;
    cout << head->love2->love2->name << endl;

    return 0;
}
