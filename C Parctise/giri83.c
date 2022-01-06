#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    /*char str1[] = "aniket kumar ";
    printf("%s\n", str1);
    char str2[20];
    strcpy(str2, str1);
    //(destination string,source string)
    printf("%s\n", str2);*/

    int n;
    char str1[] = "aniket kumar ";
    printf("%s\n", str1);
    printf("enter the no. of character\n");
    scanf("%d", &n);
    char str2[20];
    strncpy(str2, str1, n);
    str2[n] = '\0';
    //(destination string,source string,no of character)
    printf("%s\n", str2);

    return 0;
}