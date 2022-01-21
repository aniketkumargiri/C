#include<stdio.h>

int main(int argc, char const *argv[])
{
    printf("Searching in a binary search tree\n");

    return 0;
}

/*
             50
            /  \
           40   60
          / \   / \
         20  45 55 70
*/
// inOrder: 20, 40, 45, 50, 55, 60, 70
// search: target = 55
// search time-complexity: log(n) <= h <= n

// struct Node *search(struct Node *root, int key)
// {
//     if (root == NULL)
//     {
//         return NULL;
//     }
//     if (key == root->data)
//     {
//         return root;
//     }
//     else if (key < root->data)
//     {
//         return search(root->left, key);
//     }
//     else
//     {
//         return search(root->right, key);
//     }
// }