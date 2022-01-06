#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int l=strlen("aniket_kumar giri   baba");
    printf("%d\n",l);

    char name[10];
    printf("enter a string\n");
    scanf("%[^\n]s",name);
    int length=strlen(name);
    printf("%d\n",length);

    return 0;
}