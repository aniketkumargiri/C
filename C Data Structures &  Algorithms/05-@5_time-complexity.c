#include <stdio.h>
#include <stdlib.h>

struct node
{
    int value;
    struct node *left;
    struct node *right;
};

// time - complexity = O(log2(n))
int sum(struct node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    return sum(root->left) + sum(root->right) + root->value;
}

int main(int argc, char const *argv[])
{
    struct node *root;
    sum(root);

    return 0;
}