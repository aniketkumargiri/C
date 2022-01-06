#include <stdio.h>

int main(int argc, char const *argv[])
{
    /*char name[10]="Aniket";
    //name[10]={'A','N','I','K','E','T'};
    printf("%c\n",name[0]);
    printf("%c\n",name[1]);
    printf("%c\n",name[2]);
    printf("%c\n",name[3]);
    printf("%c\n",name[4]);
    printf("%c\n",name[5]);
    printf("%s\n",name);*/

    char name[10];
    printf("enter a string\n");
    scanf("%[^\n]s", name); //better
    //gets(name);
    printf("%s\n", name);

    return 0;
}