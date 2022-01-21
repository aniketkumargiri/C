#include<stdio.h>

int main(int argc, char const *argv[])
{
    printf("Insertion and Rotation in AVL tree\n");

    return 0;
}

// LL rotation in an AVL tree:
/*
          7                       
         /       ==>          5
        5                   / \
      /                    4    7
    4
*/
// RR rotation in an AVL tree:
/*
          7                       
           \      ==>            9
            9                  / \
            \                 7   11    
             11
*/
// RL rotation in an AVL tree:
/*
          7              7      
          \     ==>       \        ==>         10
          11               10                 /  \
          /                 \                7   11 
        10                   11
*/
// LR rotation in an AVL tree:
/*
          7           7             
        /      ==>   /    ==>     5
       4            5           / \
       \          /           4   7    
        5       4
*/