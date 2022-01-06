#include <stdio.h>

int fact(int);

int main(int argc, char const *argv[])
{
    int n;
    printf("enter a no ");
    scanf("%d", &n);
    int ans = fact(n);
    printf("%d", ans);

    return 0;
}
int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}
//recurtion calls itself into the function
