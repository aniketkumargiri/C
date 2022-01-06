#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char str[] = "ani's_k_the";
    // int n = strlen(str);

    // for (int i = n - 1; i >= 0; i--)
    // {
    //     printf("%c", str[i]);
    // }

    int count = 0;
    while (str[count] != '\0')
    {
        count++;
    }

    for (int i = 0; i < (count - 1) / 2; i++)
    {
        char temp = str[i];
        str[i] = str[count - 1 - i];
        str[count - 1 - i] = temp;
    }

    printf("The reversed string is: %s", str);

    return 0;
}