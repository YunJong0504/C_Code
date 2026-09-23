#include <iostream>
#include <string>
using namespace std;

struct Node
{
    int num;
    Node* left;
    Node* right;
};

int main()
{
    Node* head = new Node();
    head->num = 3;

    head->left = new Node();
    head->left->num = 7;
    head->left->left = nullptr;
    head->left->right = nullptr;

    head->right = new Node();
    head->right->num = 6;
    head->right->left = new Node();
    head->right->right = nullptr;

    head->right->left->num = 2;
    head->right->left->left = nullptr;
    head->right->left->right = nullptr;

    return 0;
}
