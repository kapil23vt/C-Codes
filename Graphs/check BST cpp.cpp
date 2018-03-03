#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* left, *right;
};

// Returns true if given tree is BST.
bool isBST(Node* root, Node* left=NULL, Node* right=NULL)
{
    // Base condition
    if (root == NULL)
        return true;

    // if left node exist that check it has
    // correct data or not
    if (left != NULL and left->data < root->data)
        return false;

    // if right node exist that check it has
    // correct data or not
    if (right != NULL and right->data > root->data)
        return false;

    // check recursively for every node.
    return isBST(root->left, left, root) and
           isBST(root->right, root, right);
}

struct Node* newNode(int data)
{
    struct Node* node = new Node;
    node->data = data;
    node->left = node->right = NULL;
    return (node);
}

int main()
{
    struct Node *root = newNode(4);
    root->left        = newNode(3);
    root->right       = newNode(5);
    root->left->left  = newNode(1);
    root->left->right = newNode(2);

    if (isBST(root))
        cout << "Is BST";
    else
        cout << "Not a BST";

    return 0;
}
