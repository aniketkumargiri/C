#include <stdio.h>
#include <malloc.h>

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

int main()
{
  /*
  // Constructing the root node
  struct Node *p;
  p = (struct Node *)malloc(sizeof(struct Node));
  p->data = 2;
  p->left = NULL;
  p->right = NULL;

  // Constructing the second node
  struct Node *p1;
  p1 = (struct Node *)malloc(sizeof(struct Node));
  p1->data = 1;
  p1->left = NULL;
  p1->right = NULL;

  // Constructing the third node
  struct Node *p2;
  p2 = (struct Node *)malloc(sizeof(struct Node));
  p2->data = 3;
  p2->left = NULL;
  p2->right = NULL;

  // Linking the root node with left and right children
  p->left = p1;
  p->right = p2;
  */

  // Constructing the root node - Using Function  (Recommended)
  struct Node *p = createNode(2);
  struct Node *p1 = createNode(1);
  struct Node *p2 = createNode(4);

  // Linking the root node with left and right children
  p->left = p1;
  p->right = p2;

  return 0;
}
