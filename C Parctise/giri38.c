#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n1,n2,x,y,gcd,lcm;
    printf("enter two integers");
    scanf("%d%d",&n1,&n2);
    x=n1;
    y=n2;
    while (n1!=n2)
    {
        if (n1>n2)
        {
            n1=n1-n2;
        }
        else
        {
            n2=n2-n1;
        }
    }
    printf("GCD is %d\n",n1);//n1 or n2

    gcd=n2;
    lcm=(float)(x*y)/gcd;
    printf("LCM is %d",lcm);
    
    return 0;
}
/*HCF(GCD)-largest common value which is common to all the given value
eg:hcf(60,24)=12
LCM-lowest common value which is the multiple to all the given values
eg:lcm(60,24)=120
*/