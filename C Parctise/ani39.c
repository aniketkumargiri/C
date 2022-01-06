#include <stdio.h>
#include <string.h>

int main()
{
    /*char c[5];
    c[0]='J';
    c[1]='O';
    c[2]='H';
    c[3]='N';
    c[4]='\0';
    printf("%s\n",c);
    int len=strlen(c);
    printf("%d",len);*/

    /*char c[] = "JOHN";
    printf("size in bytes=%d\n",sizeof(c));
    int len = strlen(c);
    printf("length=%d", len);*/

    char c[20]={'J','O','H','N','\0'};
    printf("size in bytes=%d\n",sizeof(c));
    int len = strlen(c);
    printf("length=%d", len);
    
    return 0;
}