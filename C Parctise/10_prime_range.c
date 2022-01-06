#include <stdio.h>

int isPrime(int n)
{
    int i;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    if (i == n)
    {
        return 1;
    }
}

int main(int argc, char const *argv[])
{
    int a, b;
    printf("Enter the range: ");
    scanf("%d%d", &a, &b);

    for (int i = a; i <= b; i++)
    {
        if (isPrime(i))
        {
            printf("%d ", i);
        }
    }

    return 0;
}