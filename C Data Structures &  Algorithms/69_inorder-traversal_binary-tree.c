#include <stdio.h>
#include <malloc.h>

/*
InOrder Traversal:
left subtree-->root-->right subtree
*/
// InOrder Traversal of a binary search tree is always is an ascending sorted sequence 


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

void inOrder(struct Node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

int main()
{
    // Constructing the root node - Using Function  (Recommended)
    struct Node *p = createNode(2);
    struct Node *p1 = createNode(1);
    struct Node *p2 = createNode(4);
    struct Node *p3 = createNode(5);
    struct Node *p4 = createNode(3);

    // Linking the root node with left and right children
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    inOrder(p);

    return 0;
}
/*
             2
            / \
           1   4
          / \
         5   3
*/