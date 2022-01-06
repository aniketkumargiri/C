#include <stdio.h>

int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }

    return n * factorial(n - 1);
}

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter the number you want to calculate factorial: ");
    scanf("%d", &num);

    int fact;
    // fact = 1;
    // for (int i = 1; i <= num; i++)
    // {
    //     fact = fact * i;
    // }

    fact = factorial(num);

    printf("factorial of %d is %d", num, fact);

    return 0;
}