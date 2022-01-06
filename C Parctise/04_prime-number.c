#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter the number you want to check whether it is prime or not: ");
    scanf("%d", &num);

    int flag = 1;
    for (int i = 2; i * i < num; i++)
    {
        if (num % i == 0)
        {
            flag = 0;
            break;
        }
    }

    if (flag)
    {
        printf("%d is prime", num);
    }
    else
    {
        printf("%d is not prime", num);
    }

    return 0;
}