#include<stdio.h>

int main(int argc, char const *argv[])
{
    typedef int number;
    number n1=100,n2=200,sum;
    printf("enter two numbers\n");
    printf("n1=%d\n",n1);
    printf("n2=%d\n",n2);

    sum=n1+n2;
    printf("sum=%d",sum);

    return 0;
}
//typedef is used to define alternative user define name to any data types