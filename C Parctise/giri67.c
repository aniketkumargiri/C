#include <stdio.h>

int greater(int, int);
void display(void);

int main(int argc, char const *argv[])
{
    display();

    return 0;
}
int greater(int x, int y)
{
    if (x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
void display(void)
{
    int a, b, ans;
    printf("enter no.s ");
    scanf("%d%d", &a, &b);
    ans = greater(a, b);
    printf("greater value is:%d ", ans);
}

//nesting of function signifies defining another function in the existing user defined function