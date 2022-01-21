#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d->", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

int isEmpty(struct Node *top) // when top is NULL
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct Node *top) // when dynamically allocating memory is NULL
{
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    if (p == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

struct Node *push(struct Node *top, int x) // Inserting node at index zero
{
    if (isFull(top))
    {
        printf("Stack overflow\n");
    }
    else
    {
        struct Node *n = (struct Node *)malloc(sizeof(struct Node));
        n->data = x;
        n->next = top;
        top = n;
        return top;
    }
}

int pop(struct Node **top) // Deleting node from index zero
{
    if (isEmpty(*top))
    {
        printf("Stack underflow\n");
    }
    else
    {
        struct Node *n = *top;
        *top = (*top)->next;
        int x = n->data;
        free(n);
        return x;
    }
}

int main()
{
    struct Node *top = NULL;
    top = push(top, 78);
    top = push(top, 7);
    top = push(top, 8);
    linkedListTraversal(top);

    int element = pop(&top);
    printf("\nPopped element is %d\n", element);
    linkedListTraversal(top);

    return 0;
}