#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[5], b[5], c[5];
    printf("enter 1st array ");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter 2nd array ");
    for (int j = 0; j < 5; j++)
    {
        scanf("%d", &b[j]);
    }
    for (int k = 0; k < 5; k++)
    {
        c[k] = a[k] + b[k];
        printf("%d ", c[k]);
    }

    return 0;
}