#include <iostream>
#include <string>
using namespace std;

struct Node
{
    char ch;
    Node* left;
    Node* right;
};

int main()
{
    Node* head;
    head = new Node();
    head->ch = 'A';
    
    head->left = new Node();
    head->left->ch = 'B';
    head->left->left = new Node();
    head->left->right = new Node();
    head->left->left->ch = 'D';
    head->left->right->ch = 'E';

    head->right = new Node();
    head->right->ch = 'C';

    string str;
    cin >> str;

    if (str == "H")
        cout << head->ch << endl;
    else if (str == "HR")
        cout << head->right->ch << endl;
    else if (str == "HL")
        cout << head->left->ch << endl;
    else if (str == "HLL")
        cout << head->left->left->ch << endl;
    else if (str == "HLR")
        cout << head->left->right->ch << endl;

    return 0;
}
