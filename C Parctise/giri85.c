#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    //char str[]="aniket kumar giri";
    char str[20];
    printf("enter a string\n");
    gets(str);
    strrev(str);
    printf("%s\n",str);

    return 0;
}