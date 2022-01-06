#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[5];
    int *p = a;
    int s = 0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", (p + i));
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(p + i));
        s = s + *(p + i);
    }
    printf("\n%d", s);

    return 0;
}