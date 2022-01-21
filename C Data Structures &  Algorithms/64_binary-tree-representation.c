#include <stdio.h>

int main(int argc, char const *argv[])
{
     printf("Representation of a binary tree\n");

     return 0;
}

// Structure of a node in C language:
// struct node
// {
//      int data;
//      struct node *left;
//      struct node *right;
// };

// Representation of a Binary Tree:

// 1.Array Represntation of a binary tree:
// -->Array is considered as the perfect binary tree and indexing is done from left to right after the top. The node with no child are assumed to be NULL
/*
                          7-->0
                        /   \
                   1<--11    2-->2
                      / \   / \
                 3<--7   1 11  9-->6
                   / \  /\ /\  / \
              7<--2  N N N N N N  11-->14
                       
*/

// 2.Linked Representation:
// Linked list is linear, whereas tree is non-linear hierarchical
// So, it's linked representation, not linked list representation
/*
                          1
                        /   \
                       1     4
                      / \   / \
                     11   12 N   3

*/
/*
                           ||  2  || 
                          /         \ 
                         ||1||    ||4||
                        /     \    / \
                     ||11|| ||12|| N ||3||
*/