#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[2][3], total = 0;
    printf("enter 6 values ");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
            total+=a[i][j];
        }
    }
    printf("\ntotal is %d",total);

    return 0;
}