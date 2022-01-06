#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    printf("enter value of a");
    scanf("%d", &a);
    if (a)
    {
        printf(" value of a is:%d\n", a);
    }
    if (!a)
    {
        printf("not value of of a is:%d\n", !a);
    }

    /*if (0) //false
    {
        printf("program doesnot execute\n");
    }
    printf("program ended\n");
    if (1) //true
    {
        printf("program does execute\n");
    }*/

    return 0;
}
//for single line in if-else, curley bracket {} is not needed