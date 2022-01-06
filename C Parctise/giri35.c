#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, rem, sum = 0, com;
    printf("enter the number\n");
    scanf("%d", &num);
    com = num;
    while (num > 0)
    {
        rem = num % 10;
        sum = sum*10 + rem;
        num = num / 10;
    }
    if (sum == com)
    {
        printf("number and its reverse is same;i.e, palindrome");
    }
    else
    {
        printf("number and its reverse is not same;i.e, not palindrome");
    }

    return 0;
}

/*palindrome-number from starting and end is same
eg:12321 is a palindrome no*/