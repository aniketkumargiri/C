#include <stdio.h>

#define N 256

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter the number you want to reverse: ");
    scanf("%d", &num);

    int n = num;
    // int rev = 0;

    int a[N];
    int i = 0;
    while (num > 0)
    {
        int rem = num % 10;
        num = num / 10;
        // rev = rev * 10 + rem;

        a[i] = rem;
        i++;
    }

    printf("Original num: %d\n", n);
    // printf("Reversed num: %d\n", rev);

    printf("Reversed number is: ");
    for (int j = 0; j < i; j++)
    {
        printf("%d", a[j]);
    }

    return 0;
}