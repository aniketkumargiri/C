#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num,rem,rev=0;
    printf("enter the number\n");
    scanf("%d",&num);
    while (num>0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    printf("reverse of the number is:%d\n",rev);
    
    return 0;
}
//eg:revrese of 123 is 321
