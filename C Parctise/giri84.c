#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char str1[20]="aniket kumar giri";
    char str2[20]="aniket kumar";
    int l = strcmp(str1, str2);
    if (l > 0)
    {
        printf("str1 is greater than str2\n");
    }
    else if (l < 0)
    {
        printf("str1 is lesser than str2\n");
    }
    else
    {
        printf("str1 is equal str2\n");
    }

    return 0;
}