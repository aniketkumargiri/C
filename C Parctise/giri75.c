#include <stdio.h>

void swap(int *a, int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}
int main(int argc, char const *argv[])
{
    int a, b;
    printf("enter two no.s ");
    scanf("%d%d", &a, &b);
    printf("entered values are : %d and %d ",a,b);
    swap(&a, &b);
    printf("\nthe values after swapping are : %d and %d ",a,b);

    return 0;
}