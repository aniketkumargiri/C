#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, fact = 1;
    printf("enter a no\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("factorial is:%d\n", fact);

    return 0;
}