#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    // Take the number as input from the user
    printf("Enter the value of number whose multiplication table is to be printed: ");
    scanf("%d", &num);
    
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d X %d = %d\n", num, i + 1, num * (i + 1));
    // }
    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", num, i, num * i);
    }

    return 0;
}