#include <stdio.h>

int fib_recursive(int n)
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    else
    {
        return fib_recursive(n - 1) + fib_recursive(n - 2);
    }
}

int fib_iterative(int n)
{
    int a = 0;
    int b = 1;

    for (int i = 0; i < n - 1; i++)
    {
        b = a + b;
        a = b - a;
    }
    return a;
}

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the index to find fibonacii series\n");
    scanf("%d", &n);
    printf("The value of fibonacii number at position %d using recursive approach is: %d\n", n, fib_recursive(n));
    printf("The value of fibonacii number at position %d using iterative approach is: %d\n", n, fib_iterative(n));

    return 0;
}