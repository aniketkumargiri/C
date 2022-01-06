#include <stdio.h>

void add(int x, int y)
{
    printf("first = %d ,second = %d ,addition = %d\n", x, y, x + y);
}
int main(int argc, char const *argv[])
{
    int a, b;
    void (*ptr)(int, int); //bracket in pointer is must,otherwise signifies as function
    ptr = add;             //referencing funcing address to pointer
    printf("enter two no.s ");
    scanf("%d%d", &a, &b);
    ptr(a, b); //function-call through pointer

    return 0;
}
/* syntax
1.initialising pointer for function:
function-return type (*pointer-name) (function-arguments)
eg: void (*ptr) (int,int)//return-type should be same

2.referencing funcing address to pointer:
pointer-name = &function-name;
pointer-name = function-name;

3.function-call through pointer:
ptr(a,b);
(*ptr)(a,b); */
