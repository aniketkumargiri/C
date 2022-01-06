#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char name[] = "aniket";
    int l = strlen(name);

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c ", name[j]);
        }
        printf("\n");
    }
    printf("\n");

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c ", name[i]);
        }
        printf("\n");
    }

    return 0;
}