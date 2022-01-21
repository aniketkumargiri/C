#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Types of a binary tree\n");

    return 0;
}

// Types of Binary Trees:

// 1. Full or strict Binary Tree: All nodes have either 0 or 2 children

/*
Example:
                          5
                        /   \
                       3     7
                            / \
                           6   8

*/

// 2. Perfect Binary Tree: All internal nodes have 2 children + all leaf are on same level
/*
Example:
                          5
                        /   \
                       3     7
                      / \   / \
                     1   4 6   8

*/
// 3. Complete Binary Tree: All levels are completely field possibly the last level + last level must have its keys as left as possible
/*
Example:
                          5
                        /   \
                       3     7
                      / \   / 
                     1   4 6 

*/
// 4. Degenerate Tree: Parent has exactly one child, either left or right
/*
Example:
                          5
                           \
                            7
                            / 
                            6

*/
// 5. Skewed Tree: All the children of the left skewed are towards the left + All the children of the right skewed are towards the right
/*
Left skewed tree:
Example:
                          5
                         /
                        7
                       /
                      6

*/
/*
Right skewed tree:
Example:
                          5
                           \
                            7
                            \ 
                             6

*/
