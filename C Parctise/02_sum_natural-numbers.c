#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, sum = 0;
    printf("Enter the last natural number you want to sum of: ");
    scanf("%d", &num);

    // for (int i = 1; i <= num; i++)
    // {
    //     sum += i;
    // }

    sum = (num * (num + 1)) / 2;
    printf("Sum of first %d natural numbers is: %d\n", num, sum);

    return 0;
}