#include <stdio.h>

void starPattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void invertPattern(int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main(int argc, char const *argv[])
{
    char ch;
    printf("Enter 0 for star pattern and 1 for reverse star pattern\n");
    scanf("%c", &ch);

    int n;
    printf("enter the number of lines\n");
    scanf("%d", &n);

    switch (ch)
    {
    case '0':
        starPattern(n);
        break;

    case '1':
        invertPattern(n);
        break;

    default:
        printf("Invalid choice\n");
        break;
    }

    return 0;
}