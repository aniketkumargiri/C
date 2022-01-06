#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,b;
    printf("enter two values");
    scanf("%d%d",&a,&b);
    int c=(a>b)?a:b;
    printf("greater value is %d",c);
    
    return 0;
}
/*conditional operator statements
syntax: (condition)? expression1:expression2 
(ternary operator)
*/