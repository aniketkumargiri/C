#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,b,c,d,e;
    float sum,avg;
    printf("enter marks in 5 subjects");
    scanf("%d%d%d%d%d\n",&a,&b,&c,&d,&e);
    sum=(a+b+c+d+e);
    printf("%f\n",sum);
    avg=(float)sum/5;
    printf("%f\n",avg);
    avg=sum/5.0;//making 5.0 as float means type-casting is not necessary
    printf("%f\n",avg);

    return 0;
}