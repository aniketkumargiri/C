#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Stack
{
    int size;
    int top;
    char *arr;
};

int isEmpty(struct Stack *ptr)
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

int isFull(struct Stack *ptr)
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

void push(struct Stack *ptr, int val)
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

char pop(struct Stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack underflow! Cannot pop from the stack\n");
        return -1;
    }
    else
    {
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

char stackTop(struct Stack *sp)
{
    return sp->arr[sp->top];
}

char stackBottom(struct Stack *sp)
{
    return sp->arr[0];
}

int parenthesisMatch(char *exp)
{
    struct Stack *sp;
    // create the stack
    // sp->size = strlen(exp);
    sp->size = 64;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));

    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(')
        {
            push(sp, '(');
        }
        else if (exp[i] == ')')
        {
            if (isEmpty(sp))
            {
                return 0; // false
            }
            else
            {
                pop(sp);
            }
        }
    }

    if (isEmpty(sp))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    // char *exp = "8)(*(9)-(2+4)/3)";
    char *exp = "8*(9)-(2+4)/(3)";
    if (parenthesisMatch(exp))
    {
        printf("The parenthesis is matching");
    }
    else
    {
        printf("The parenthesis is not matching");
    }

    return 0;
}