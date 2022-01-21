#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Push, Pop and Other opertions on stack\n");

    return 0;
}

// void push(struct STACK *ptr, int val)
// {
//     if (isFull(ptr))
//     {
//         printf("Stack overflow! Cannot push %d to the stack\n", val);
//     }
//     else
//     {
//         ptr->top++;
//         ptr->arr[ptr->top] = val;
//     }
// }

// int pop(struct STACK *ptr)
// {
//     if (isEmpty(ptr))
//     {
//         printf("Stack underflow! Cannot pop from the stack\n");
//         return -1;
//     }
//     else
//     {
//         int val = ptr->arr[ptr->top];
//         ptr->top--;
//         return val;
//     }
// }

// int main(int argc, char const *argv[])
// {
//     struct STACK *sp;
//     sp = (struct STACK *)malloc(sizeof(struct STACK));
//     sp->size = 10;
//     sp->top = -1;
//     sp->arr = (int *)malloc(sp->size * sizeof(int));
// 
//     return 0;
// }