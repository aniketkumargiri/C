#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b;
    for (a = 1, b = 2; a <= 5, b <= 10; a++, b = b + 2)
    {
        printf("%d,%d\t", a, b);
    }
    printf("\n");

    for (a = 1, b = 2; a <= 5, b <= 20; a++, b = b + 2)
    {
        printf("%d,%d\t", a, b);
    }
     printf("\n");
    
    for (a = 1, b = 2; a <= 5 || b <= 20; a++, b = b + 2)
    {
        printf("%d,%d\t", a, b);
    }
     printf("\n");
    
    for (a = 1, b = 2; a <= 5 && b <= 10; a++, b = b + 2)
    {
        printf("%d,%d\t", a, b);
    }
     printf("\n");

    return 0;
}