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

// 1.Deleting the first element from the linked list
struct Node *deleteFirst(struct Node *head)
{
    struct Node *ptr = head;
    head = head->next;
    free(ptr);

    return head;
}

// 2.Deleting the element in between at a given index
struct Node *deleteAtIndex(struct Node *head, int index)
{
    struct Node *temp1 = head;
    struct Node *temp2 = head->next;
    for (int i = 0; i < index - 1; i++)
    {
        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    temp1->next = temp2->next;
    free(temp2);

    return head;
}

// 3.Delete the last element
struct Node *deleteAtLast(struct Node *head)
{
    struct Node *temp1 = head;
    struct Node *temp2 = head->next;
    while (temp2->next != NULL)
    {
        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    temp1->next = NULL;
    free(temp2);

    return head;
}

// 4.Deleting the element with a given value from the linked list
struct Node *deleteAtValue(struct Node *head, int value)
{
    struct Node *temp1 = head;
    struct Node *temp2 = head->next;
    while (temp2->data != value && temp2->next != NULL)
    {
        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    if (temp2->data == value)
    {
        temp1->next = temp2->next;
        free(temp2);
    }

    return head;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data = 4;
    head->next = second;

    // Link second and third nodes
    second->data = 3;
    second->next = third;

    // Link third and fourth nodes
    third->data = 8;
    third->next = fourth;

    // Terminate the list at the fourth node
    fourth->data = 1;
    fourth->next = NULL;

    printf("Linked list before deletion\n");
    linkedListTraversal(head);

    printf("Linked list after deletion\n");

    // head = deleteFirst(head);
    // linkedListTraversal(head);

    head = deleteAtIndex(head, 2);
    linkedListTraversal(head);

    // head = deleteAtLast(head);
    // linkedListTraversal(head);

    // head = deleteAtValue(head,3);
    // linkedListTraversal(head);

    return 0;
}