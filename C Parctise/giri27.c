#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,b,c;
    printf("enter three no.s\n");
    scanf("%d%d%d\n",&a,&b,&c);
    if (a>b)
    {
        if (a>c)
        {
            printf("a is the greatest\n");
        }
        else
        {
            printf("c is the greatest\n");
        }
        
    }
    else
    {
        if (b>c)
        {
            printf("b is the gretest\n");
        }
        else
        {
            printf("c is the gretest\n");
        }
        
    }
    
    
    return 0;
}