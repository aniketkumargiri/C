#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Traversal in Binary Tree: Inorder, PostOrder and PreOrder traversals\n");

    return 0;
}

// Traversal in a binary tree:
/*
                          7
                        /   \
                       2     3
                      /       \
                     1         4

*/
// 1. PreOrder traversal:
// root -> left subtree -> right subtree
// Example: 7, 2, 1, 3, 4

// 2. PostOrder traversal:
// left subtree -> right subtree -> root
// Example: 1, 2, 3, 4, 7

// 3. Inorder traversal:
// left subtree -> root -> right subtree 
// Example: 1, 2, 7, 3, 4
