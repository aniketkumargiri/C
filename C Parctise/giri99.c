#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int T, n, x;
    int *A;
    A = (int *)malloc(n * sizeof(int));
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d%d", &n, &x);
        int i = 1;
        while (i <= n)
        {
            scanf("%d", &A[i]);

            if (A[i] != A[i + 1])
            {
                x++;
            }
            i++;
        }
        i--;
        printf("%d\n", (n + i - x));
    }

    return 0;
}