#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("enter a no ");
    scanf("%d", &n);
    int sum = 0;

    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == n)
    {
        printf("given no %d is a perfect no", n);
    }
    else
    {
        printf("given no %d is not a perfect no", n);
    }

    return 0;
}