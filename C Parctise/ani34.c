#include <stdio.h>

void increment(int a)//called function=formal argument
{
    a = a + 1;
    printf("address of variable a in increment = %d\n", &a);
}
void incrementptr(int *x)
{
    *x=*x+10;
}
int main()//calling fuunction=actual argument
{
    int a;
    a = 10;
    increment(a);
    printf("address of variable a in main = %d\n", &a);
    printf("%d\n",a);

    int *p=&a;
    incrementptr(&a);
    printf("%d",*p);

    return 0;
}