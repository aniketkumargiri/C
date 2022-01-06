#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num,rem,sum=0;
    printf("enter the number\n");
    scanf("%d",&num);
    while (num>0)
    {
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    printf("sum of the digits of entered number is:%d\n",sum);
    
    return 0;
}
//eg:sumof digits of 123=6


