#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* right;
    Node* left;

    Node(int value)
    {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

void dfs(Node* root)
{
	if (root == nullptr)
		return;

	cout << root->data << " ";

	dfs(root->left);

	dfs(root->right);
}

int main()
{
	Node* root = new Node(1);

	root->left = new Node(2);
	root->right = new Node(5);

    root->left->left = new Node(6);
    root->left->right = new Node(7);

    root->right->left = new Node(4);
    root->right->right = new Node(3);

    dfs(root);

    return 0;
}
