#include <stdio.h>
#include <stdlib.h>

struct node
{
     int data;
     struct node* left;
     struct node* right;
};

struct node* newNode(int data)
{
     struct node* node = (struct node*)malloc(sizeof(struct node));
     node->data = data;
     node->left = NULL;
     node->right = NULL;

     return(node);
}

// Post order = Root at the end
void printPostorder(struct node* node)
{
     if (node == NULL)
        return;

     printPostorder(node->left);
     printPostorder(node->right);
     printf("%d ", node->data);
}

// Inorder = Root in Middle
void printInorder(struct node* node)
{
     if (node == NULL)
          return;

    printInorder(node->left);
    printf("%d ", node->data);
    printInorder(node->right);
}

// Preorder = Root at first
void printPreorder(struct node* node)
{
     if (node == NULL)
          return;

     printf("%d ", node->data);
     printPreorder(node->left);
     printPreorder(node->right);
}

int main()
{
     struct node *root  = newNode(1);                         // 1
     root->left             = newNode(2);                     //2-3
     root->right           = newNode(3);                    //4-5
     root->left->left     = newNode(4);
     root->left->right   = newNode(5);

     printf("Preorder = ");
     printPreorder(root); // 1 2 4 5 3

     printf("\nInorder = ");
     printInorder(root); // 4 2 5 1 3

     printf("\nPostorder = ");
     printPostorder(root); // 4 5 2 3 1

     getchar();
     return 0;
}
