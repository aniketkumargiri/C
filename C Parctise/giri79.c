#include <stdio.h>

int main(int argc, char const *argv[])
{
    char str[20];
    printf("enter a string\n");
    scanf("%s", str);
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c is stored at %d position and %u address\n", str[i], (i + 1), &str[i]);
        i++;
    }

    return 0;
}