#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, i, fact, rem, sum = 0, temp;
    printf("enter a number\n");
    scanf("%d", &num);
    temp = num;
    while (num > 0)
    {
        i = 1;
        fact = 1;
        rem = num % 10;
        while (i <= rem)
        {
            fact = fact * i;
            i++;
        }
        sum = sum + fact;
        num = num / 10;
    }
    printf("%d\n", sum);
    if (sum == temp)
    {
        printf("given no %d is strong", temp);
    }
    else
    {
        printf("given no %d is not strong", temp);
    }

    return 0;
}
/*strong number:A no is called strong no if the sum of the factorial of its digit is equal to no itself
eg : 145=(1 !) + (4 !) + (5 !) = 145 */