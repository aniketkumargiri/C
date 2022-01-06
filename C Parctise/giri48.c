#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, flag = 1;
    printf("enter a no\t");
    scanf("%d", &n);
    for (int i = 2; i*i < n; i++)
    {
        if (n % i == 0)
        {
            flag = 0;
            break;
        }
    }
    if (flag)
    {
        printf("given no is prime");
    }
    else
    {
        printf("given no is not prime");
    }

    return 0;
}