#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    printf("enter value of a");
    scanf("%d", &a);
    if (a > 0)
    {
        printf("no is +ve\n");
    }
    else if (a < 0)
    {
        printf("no is -ve\n");
    }
    else
    {
        printf("no is zero\n");
    }

    return 0;
}