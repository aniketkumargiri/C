#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Best trick to find PreOrder, InOrder and PostOrder traversal\n");

    return 0;
}

/*
                          7
                        /   \
                       2     1
                      / \   
                     0   4

*/
// preorder(left): 7, 2, 0, 4, 1
// postorder(right): 0, 4, 2, 1, 7
// inorder(straight): 0, 2, 4, 7, 1
