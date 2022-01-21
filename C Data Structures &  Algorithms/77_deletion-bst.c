#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Deletion in a binary search tree\n");

    return 0;
}

// Deleting a node in a BST:
// case 1: The node is a leaf node
// 1. search the node
// 2. simply delete the node

// case 2: The node is a non leaf node
// 1. search the node
// 2. replace the node with it's inorder predecessor or successor

// case 3: The node is the root node
// 1. search the node
// 2. replace the node with it's inorder predecessor or successor
// 3. keep doing this until the tree has no empty nodes
/*
             8
           /   \
          3     10
         /  \    \
         1   6    14
            / \   /
           4   7 13
*/
// inOrder: 1, 3, 4, 6, 7, 8, 10, 13, 14
