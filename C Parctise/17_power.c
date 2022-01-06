#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, p;
    printf("Enter the number of which you want to calculate the power: ");
    scanf("%d", &n);
    printf("Enter the power: ");
    scanf("%d", &p);

    long long int pow = 1;
    for (int i = p; i >= 1; i--)
    {
        pow = pow * n;
    }

    printf("The value of %d to the power %d is: %d\n", n, p, pow);

    return 0;
}