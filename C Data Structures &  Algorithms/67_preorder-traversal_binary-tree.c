#include <stdio.h>
#include <malloc.h>

/*
PreOrder Traversal:
Root-->left subtree-->right subtree
*/

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *createNode(int data)
{
    struct Node *n;                                 //Creating a node pointer
    n = (struct Node *)malloc(sizeof(struct Node)); //Allocating memory in the heap
    n->data = data;                                 //Setting the data
    n->left = NULL;                                 //setting the left child childern to NULL
    n->right = NULL;                                //setting the right child childern to NULL

    return n; //Finally returning the created node
}

void preOrder(struct Node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

int main()
{
    // Constructing the root node - Using Function  (Recommended)
    struct Node *p = createNode(4);
    struct Node *p1 = createNode(1);
    struct Node *p2 = createNode(6);
    struct Node *p3 = createNode(5);
    struct Node *p4 = createNode(2);

    // Linking the root node with left and right children
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    preOrder(p);

    return 0;
}
/*
             4
            / \
           1   6
          / \
         5   2
*/