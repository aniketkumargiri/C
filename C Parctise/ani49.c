#include <stdio.h>

void Hello(char *name)
{
    printf("Hello World %s\n",name);
}
/*int add(int a, int b)
{
    return a+b;
}*/
int main()
{
    /*int c;
    int (*p)(int, int);
    p = &add;       //function name will return pointer
    c = (*p)(2, 3); //de-referencing and executing the function
    printf("%d\n", c);*/

    void (*ptr)();
    ptr = Hello;
    ptr("ani");

    return 0;
}