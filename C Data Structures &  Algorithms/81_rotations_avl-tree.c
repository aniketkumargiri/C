#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("AVL Trees: LL, LR, RL and RR rotations\n");

    return 0;
}

// Rotate Operations:
// We can perform rotate operations to balance a binary search tree such that the newly formed tree satisfies all the properties of a BST. Following are two basic rotate operations:
// 1. Left Rotate wrt a node - Node is moved towards the left
// 2. Right Rotate wrt a node - Node is moved towards the right
/*
               9                        15
             /  \                     /  \
            8    15       <==>      9    20
                /  \              /  \
               11   20           8   11
*/

// Balancing a AVL tree after insertion:
// In order to balance an AVL tree after insertion, we can follow the following:
// 1. For a Left-Left insertion - Right rotate once wrt the first imbalanced node.
/*          
                11                              9
              /  \      inseart:4             /  \
            9     18     ==>                5     11
          /  \                             /     /  \
        5     10                         4     10   18
     
*/
// 2. For a Right-Right insertion - Left rotate once wrt the first imbalanced node.
// 1. For a Left-Right insertion - Left rotate once and then right rotate once.
// 1. For a Right-Left insertion - Right rotate once and then left rotate once.
/* 
                   7                             7
                /   \                          /  \                       7
               1    10       inseart:16       1    10      ==>          /  \
                      \        ==>                  \                 1    16
                      17                             16                   /  \
                      /                               \                  10   17
                    16                                 17
*/