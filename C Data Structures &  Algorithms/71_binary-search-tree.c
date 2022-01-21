#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Binary search tree: Introduction & Properties\n");

    return 0;
}

// Binary Search Tree:
// -->It is a type of Binary Tree
// -->All nodes of the left subtree are lesser
// -->All nodes of the right subtree are greater
// -->Left & Right subtree are also BST
// -->There are no duplicate nodes

// -->Inorder Traversal of a BST gives an ascending sorted array

/*
Binary Search Tree:
                          9-->root
                        /   \-->edges
                       4     11-->nodes
                      / \     \
                     2   7     19-->leaf nodes
                        / \    /
                       5   8  14

*/
// inOrder: 2, 4, 5, 7, 8, 9, 11, 14, 19
