#include <stdio.h>
#include <stdlib.h>

struct STACK
{
    int size;
    int top;
    int *arr;
};

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
void push(struct STACK *ptr, int val)
{
    if (isFull(ptr))
    {
        printf("Stack overflow! Cannot push %d to the stack\n", val);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

// time-complexity=O(1)
int pop(struct STACK *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack underflow! Cannot pop from the stack\n");
        return -1;
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int main()
{
    struct STACK *sp;
    sp = (struct STACK *)malloc(sizeof(struct STACK));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    printf("Stack has been created successfull\n\n");

    printf("Before pushing, Full:%d\n", isFull(sp));
    printf("Before pushing, Empty:%d\n\n", isEmpty(sp));

    push(sp, 5);
    push(sp, 15);
    push(sp, 26);
    push(sp, 53);
    push(sp, 36);
    push(sp, 57);
    push(sp, 98);
    push(sp, 66);
    push(sp, 39);
    push(sp, 119); //Stack is Full
    push(sp, 938); //Stack overflow. so,cannot go inside the stack

    printf("After pushing, Full: %d\n", isFull(sp));
    printf("After pushing, Empty: %d\n\n", isEmpty(sp));

    printf("popped %d from the stack\n", pop(sp));
    printf("After poping, Full: %d\n", isFull(sp));
    printf("After poping, Empty: %d\n", isEmpty(sp));

    return 0;
}