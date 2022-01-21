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

// time - complexity = O(1)
int peek(struct STACK *sp, int i)
{
    if ((sp->top - i + 1) < 0)
    {
        printf("Not a valid position for the stack\n");
        return -1;
    }
    else
    {
        return sp->arr[sp->top - i + 1];
    }
}

// time - complexity = O(1)
int stackTop(struct STACK *sp)
{
    return sp->arr[sp->top];
}

// time - complexity = O(1)
int stackBottom(struct STACK *sp)
{
    return sp->arr[0];
}

int main()
{
    struct STACK *sp;
    sp = (struct STACK *)malloc(sizeof(struct STACK));
    sp->size = 20;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    printf("Stack has been created successfull\n\n");

    printf("Before pushing, Full:%d\n", isFull(sp));
    printf("Before pushing, Empty:%d\n\n", isEmpty(sp));

    push(sp, 1);
    push(sp, 23);
    push(sp, 99);
    push(sp, 75);
    push(sp, 3);
    push(sp, 64);
    push(sp, 57);
    push(sp, 46);
    push(sp, 89);
    push(sp, 6);
    push(sp, 5);
    push(sp, 75);

    printf("After pushing, Full: %d\n", isFull(sp));
    printf("After pushing, Empty: %d\n\n", isEmpty(sp));

    printf("The topmost value of this stack is %d\n", stackTop(sp));
    printf("The bottommost value of this stack is %d\n", stackBottom(sp));

    return 0;
}