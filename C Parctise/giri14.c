#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a=10,b=10,c=20,d;
    d=b+c*a;
    printf("%d\n",d);
    d=a/b*c;
    printf("%d\n",d);
    d=a-c/b;
    printf("%d\n",d);
    d=c*a+b;
    printf("%d\n",d);
    d=(c-b)*(a/b)+c-b/a;
    printf("%d\n",d);

    return 0;
}
/*operator precedance:
() > (*,/,%) > (+,-) : associativity left-->right
= : associativity right<--left
*/