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

// 1.Insert at beginning
struct Node *insertAtFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;
    head = ptr;

    return head;
}

// 2.Insert in between
struct Node *insertAtIndex(struct Node *head, int data, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *temp = head;

    int i = 0;
    while (i != index - 1)
    {
        temp = temp->next;
        i++;
    }

    ptr->data = data;
    ptr->next = temp->next;
    temp->next = ptr;

    return head;
}

// 3.Insert after a node
struct Node *insertAfterNode(struct Node *head, struct Node *preNode, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = preNode->next;
    preNode->next = ptr;

    return head;
}

// 4.Insert at end
struct Node *insertAtEnd(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = ptr;
    ptr->next = NULL;

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
    head->data = 7;
    head->next = second;

    // Link second and third nodes
    second->data = 11;
    second->next = third;

    // Link third and fourth nodes
    third->data = 41;
    third->next = fourth;

    // Terminate the list at the fourth node
    fourth->data = 66;
    fourth->next = NULL;

    printf("Linked list before insertion\n");
    linkedListTraversal(head);

    printf("Linked list after insertion\n");

    // head = insertAtFirst(head, 56);
    // linkedListTraversal(head);

    // head = insertAtIndex(head, 56, 1);
    // linkedListTraversal(head);

    // head = insertAtEnd(head, 98);
    // linkedListTraversal(head);

    // head = insertAfterNode(head, head->next->next, 45);
    head = insertAfterNode(head, third, 45);
    linkedListTraversal(head);

    return 0;
}