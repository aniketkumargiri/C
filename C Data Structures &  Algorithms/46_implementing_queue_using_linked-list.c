#include <stdio.h>
#include <stdlib.h>

struct Node *f = NULL;
struct Node *r = NULL;

struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr)
{
    printf("Printing the elements of this linked list\n");
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

void enQueue(int val)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    if (n == NULL) //Checking for isFull
    {
        printf("Queue is Full");
    }
    else
    {
        n->data = val;
        n->next = NULL;
        if (f == NULL)
        {
            f = r = n;
        }
        else
        {
            r->next = n;
            r = n;
        }
    }
}

int deQueue()
{
    int val = -1;
    struct Node *ptr = f;
    if (f == NULL) //Checking isEmpty
    {
        printf("Queue is Empty\n");
    }
    else
    {
        f = f->next;
        val = ptr->data;
        free(ptr);
    }
    return val;
}

int main()
{

    linkedListTraversal(f);
    printf("Dequeqing element %d\n", deQueue());
    enQueue(4);
    enQueue(3);
    enQueue(45);
    enQueue(17);
    linkedListTraversal(f);
    printf("Dequeqing element %d\n", deQueue());

    return 0;
}