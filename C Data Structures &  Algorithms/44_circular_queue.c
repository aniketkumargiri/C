#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct circularQueue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isEmpty(struct circularQueue *q)
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

int isFull(struct circularQueue *q)
{
    if ((q->r + 1) % q->size == q->f) //circular increment of front is equal as rear
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void enQueue(struct circularQueue *q, int val)
{
    if (isFull(q))
    {
        printf("Full! Queue Overflow\n");
    }
    else
    {
        printf("Enqueued element is %d\n",val);
        q->r = (q->r + 1) % q->size;
        q->arr[q->r] = val;
    }
}

int deQueue(struct circularQueue *q)
{
    int a = -1;
    if (isEmpty(q))
    {
        printf("No element! Queue Underflow\n");
    }
    else
    {
        q->f = (q->f + 1) % q->size;
        a = q->arr[q->f];
    }
    return a;
}

int main()
{
    struct circularQueue q;
    q.size = 4;
    q.f = 0;
    q.r = 0;
    q.arr = (int *)malloc(q.size * sizeof(int));

    if (isEmpty(&q))
    {
        printf("Queue is empty\n");
    }

    enQueue(&q, 10);
    enQueue(&q, 12);
    enQueue(&q, 22);
    enQueue(&q, 27);

    if (isFull(&q))
    {
        printf("Queue is full\n");
    }

    printf("dequeuing element %d\n", deQueue(&q));
    printf("dequeuing element %d\n", deQueue(&q));
    printf("dequeuing element %d\n", deQueue(&q));
    enQueue(&q, 18);
    enQueue(&q, 38);
    enQueue(&q, 119);

    return 0;
}