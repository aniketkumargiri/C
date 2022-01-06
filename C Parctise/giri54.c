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
    for (int i = 5; i < 10; i++)
    {
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        c[i] = a[i];
    }
    for (int i = 5; i < 10; i++)
    {
        c[i] = b[i];
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", c[i]);
    }
    printf("\n");
    int temp;
    for (int i = 0; i < 10 - 1; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (c[j] < c[i])
            {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}