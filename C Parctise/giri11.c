#include <stdio.h>
int c=100;

int main(int argc, char const *argv[])
{
    auto int a=200;
    register int b=300;
    extern int c;
    printf("%d %d %d",a,b,c);

    return 0;
}
/*storage classes
1.automatic- initial value is garbage value; lifetime(scope) within the (local) function
2.register- initialised for quick accessing the variable; scope is local
3.static- both global and local variable
4.external-initial value is 0;scope is global; can also be accessed in another file
*/