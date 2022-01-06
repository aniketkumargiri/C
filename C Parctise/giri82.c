#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    /*char str1[]="aniket kumar ";
    printf("%s\n",str1);
    char str2[]="giri  _baba";
    printf("%s\n",str2);
    strcat(str1,str2);
    //(destination string,source string)
    printf("%s\n",str1);
    int l1=strlen(str1);
    int l2=strlen(str2);
    printf("%d %d\n",l1,l2);*/

    char str1[]="aniket kumar ";
    printf("%s\n",str1);
    char str2[]="giri  _baba";
    printf("%s\n",str2);
    int n;
    printf("enter no. of characters you want to concatenate\n");
    scanf("%d",&n);
    strncat(str1,str2,n);
    //(destination string,source string,no. of chracters)
    printf("%s\n",str1);
    int l1=strlen(str1);
    int l2=strlen(str2);
    printf("%d %d\n",l1,l2);

    return 0;
}