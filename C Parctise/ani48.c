#include <stdio.h>
#include <stdlib.h>

/*int add(int a, int b)
{
    printf("address of a in add = %d\n",&a);
    int c = a + b;
    return c;
}
int main()
{
    int x = 2, y = 4;
    printf("address of x in main = %d\n",&x);
    int z = add(x, y);
    printf("%d\n", z);
    return 0;
}
printf("\n");
*/

/*int add(int *a, int *b)
{
    printf("address of a in add = %d\n",&a);
    printf("address of a in add(address of a in main) = %d\n",a);
    printf("value at address of a in add = %d\n",*a);
    int c = *a + *b;
    return c;
}
int main()
{
    int x = 2, y = 4;
    printf("address of x in main = %d\n",&x);
    int z = add(&x, &y);
    printf("%d\n", z);
    return 0;
}*/

/*int *add(int *a, int *b)
{
    int c = *a + *b;
    return &c;//returns address of local variable
}
int main()
{
    int x = 2, y = 4;
    int *z = add(&x, &y);
    printf("%d\n", *z);
    return 0;
}*/

/*In stack, its better to pass address of local variable from bottom to top(main/calling to called function);but reverse is not right.Use heap(dynamic memrory allocation) for it, because it is out of the stack frame*/

void printHelloWorld()
{
    printf("Hello World\n");
}
int *add(int *a, int *b)
{
    int *c = (int *)malloc(sizeof(int));
    *c = *a + *b;
    return c;
}
int main()
{
    int x = 2, y = 4;
    int *z = add(&x, &y);
    printHelloWorld();
    printf("%d\n", *z);
    return 0;
}