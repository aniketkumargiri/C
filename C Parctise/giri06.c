#include <stdio.h>
int a;
void add(void);

int main(int argc, char const *argv[])
{
    printf("enter value for global vriable a");
    scanf("%d",&a);
    add();
    return 0;
}
void add(void)
{
    int b;
    printf("enter value for local variable b");
    scanf("%d",&b);
    printf("addition is %d", a+b);
}
//local variable is preferred over global variable