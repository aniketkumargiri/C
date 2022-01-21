#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *head)
{
    struct Node *ptr = head;
    printf("%d->", ptr->data);
    ptr = ptr->next;

    while (ptr != head)
    {
        printf("%d->", ptr->data);
        ptr = ptr->next;
    }

    // do
    // {
    //     printf("%d->", ptr->data);
    //     ptr = ptr->next;

    // } while (ptr != head);

    printf("head\n");
}

// 1.Insert at beginning in circular linked list
struct Node *insertAtFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *temp = head->next;

    while (temp->next != head)
    {
        temp = temp->next;
    }
    // At this point temp points to the last node of this circular linked list
    temp->next = ptr;
    ptr->next = head;

    return ptr;
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

    while (temp->next != head)
    {
        temp = temp->next;
    }

    temp->next = ptr;
    ptr->next = head;

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
    third->data = 6;
    third->next = fourth;

    // Terminate the list at the fourth node
    fourth->data = 1;
    fourth->next = head;

    printf("Circular Linked list before insertion\n");
    linkedListTraversal(head);

    printf("Circular Linked list after insertion\n");

    // head = insertAtFirst(head, 37);
    // linkedListTraversal(head);

    // head = insertAtIndex(head, 23, 2);
    // linkedListTraversal(head);

    // head = insertAfterNode(head, head->next->next, 45);
    // head = insertAfterNode(head, third, 11);
    // linkedListTraversal(head);

    head = insertAtEnd(head, 13);
    linkedListTraversal(head);

    return 0;
}