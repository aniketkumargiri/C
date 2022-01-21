#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
Queue --> FIFO: First In First Out principal is followed
Insertion-->from rear 
Deletion-->from front
*/
struct Queue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isEmpty(struct Queue *q)
{
    if (q->f == q->r)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct Queue *q)
{
    if (q->r == q->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void enQueue(struct Queue *q, int val)
{
    if (isFull(q))
    {
        printf("Full! Queue Overflow\n");
    }
    else
    {
        q->r = q->r + 1;
        q->arr[q->r] = val;
        printf("Enqueued element is %d\n", val);
    }
}

int deQueue(struct Queue *q)
{
    int a = -1;
    if (isEmpty(q))
    {
        printf("No element! Queue Underflow\n");
    }
    else
    {
        q->f++;
        a = q->arr[q->f];
    }
    return a;
}

int main()
{
    struct Queue q;
    q.size = 4;
    q.f = -1;
    q.r = -1;
    q.arr = (int *)malloc(q.size * sizeof(int));

    if (isEmpty(&q))
    {
        printf("Queue is empty\n");
    }

    enQueue(&q, 10);
    enQueue(&q, 12);
    enQueue(&q, 22);
    enQueue(&q, 32);

    if (isFull(&q))
    {
        printf("Queue is full\n");
    }

    printf("dequeuing element %d\n", deQueue(&q));
    printf("dequeuing element %d\n", deQueue(&q));
    printf("dequeuing element %d\n", deQueue(&q));
    printf("dequeuing element %d\n", deQueue(&q));
    enQueue(&q, 37);

    return 0;
}