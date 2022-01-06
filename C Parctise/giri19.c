#include<stdio.h>
#define VALUE 10 //semi-colon not here
#define SIZE sizeof(int)*4
#define A 50-23
#define B 13-15
#define C (50-23)
#define D (13-15)

int main(int argc, char const *argv[])
{
    int d=VALUE-5;
    printf("%d\n",d);
    int a=SIZE-5;
    printf("%d\n",a);
    int c=A*B; //c=50-23*13-15= 50-299-15= -264
    printf("%d\n",c);
    int b=C*D; //b=(50-23)*(13-15)= (27)*(-2)= -54
    printf("%d\n",b);

    return 0;
}
/*macro substitution refers to an identifier which is replaced by a predefined values in the program whenever needed; #define directives is used
1.simple micro substitution
2.argumented micro substitution
3.nested micro substitution
*/