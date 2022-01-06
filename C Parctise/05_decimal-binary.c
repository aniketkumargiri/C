#include <stdio.h>

#define N 256

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter the decimal number you want to convert into binary: ");
    scanf("%d", &num);

    int a[N];
    int i = 0;
    while (num > 0)
    {
        int rem = num % 2;
        num = num / 2;
        a[i] = rem;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", a[j]);
    }

    return 0;
}