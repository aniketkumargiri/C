#include <stdio.h>

// time - complexity = O(n ^ (1 / 2));
int isPrime(int n)
{
    if (n == 1)
    {
        return 0;
    }

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

// time - complexity = O(1);
int isPrimeNumber(int n)
{
    for (int i = 2; i * i <= 1000; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the value you want to check whther it is prime or not\n");
    scanf("%d", &n);

    int result = isPrime(n);
    printf("%d\n", result);

    int ans = isPrimeNumber(n);
    printf("%d\n", ans);

    return 0;
}