#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int k = 0;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", k);
        }
        printf("\n");
        k++;
    }

    return 0;
}