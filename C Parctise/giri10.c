#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, t;
    printf("enter value of a and b");
    scanf("%d%d", &a, &b);
    /*t=a;
    a=b;
    b=t;*/
    a = a + b;
    b = a - b;
    a = a - b;
    printf("the new value of a and b is %d and %d", a, b);

    return 0;
}
