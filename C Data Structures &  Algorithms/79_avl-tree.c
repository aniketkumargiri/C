#include<stdio.h>

int main(int argc, char const *argv[])
{
    printf("Introduction to AVL tree\n");

    return 0;
}
// Why do we need an AVL tree?
// Almpst all the operations in a binary search tree are of order O(h) where h is the Height of the tree
// If we don't plan our tree properly, yjis height can get as high as n where n is the number of nodes in a BST(skewed tree)
// To guarantee an upper bound of O(logn) for all these operations, we use balanced trees

// Height balanced binary search tree
// Height difference between heights of left and right subtrees for every node is less than or equal to 1
// Balanced factor = Height of left subtree - Height of right subtree 
// Can be -1, 0 or 1 for a node to be balanced in a binary search tree
// Can be -1, 0 or 1 for all nodes of an AVL tree
/*  
                          j
                       /   \
                      f      p
                    /  \    / \
                  d    g   l   v
                /          \  / \
               c           n  s  x
                            / \
                           o   u

*/