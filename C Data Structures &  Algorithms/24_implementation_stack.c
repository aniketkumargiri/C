#include <stdio.h>
#include <stdlib.h>

/*
Stack: Linear data structure
--> LIFO: Last In First Out principal is followed
*/
struct STACK
{
    int size;
    int top;
    int *arr;
};

// can't pop from stack if stack is empty
int isEmpty(struct STACK *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
// time-complexity=O(1)

// can't push into stack if stack is full
int isFull(struct STACK *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
// time-complexity=O(1)

int main()
{

    // struct STACK s;
    // s.size = 64;
    // s.top = -1;
    // s.arr = (int *)malloc(s.size * sizeof(int));

    // using stack as pointer
    struct STACK *s;
    s->size = 64;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    // Check if stack is empty
    if (isEmpty(s))
    {
        printf("The stack is empty\n");
    }
    else
    {
        printf("The stack is not empty\n");
    }

    // Pushing an element manually
    s->arr[0] = 7;
    s->top++;
    // checking for top index and topmost element
    printf("%d\t", s->top);
    printf("%d\n", s->arr[s->top]);

    // Pushing another element manually in the stack
    s->arr[1] = 13;
    s->top++;

    // checking for top index and topmost element
    printf("%d\t", s->top);
    printf("%d\n", s->arr[s->top]);

    // Check if stack is full
    if (isFull(s))
    {
        printf("The stack is full\n");
    }
    else
    {
        printf("The stack is not full\n");
    }

    return 0;
}