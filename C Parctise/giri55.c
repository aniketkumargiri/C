#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[5] = {2, 1, 7, 5, 3};
    int b[5] = {5, 11, 2, 6, 10};
    int c[10];

    int j = 0;
    for (int i = 0; i < 5; i++)
    {
        if (i > 4 && i < 10)
        {
            c[i] = b[j];
            j++;
        }
        c[i] = a[i];
    }

    for (int k = 0; k < 10; k++)
    {
        printf("%d ", c[k]);
    }

    return 0;
}