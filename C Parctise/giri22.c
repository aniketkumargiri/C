#include <stdio.h>
#define M 100
#define N M + 10
#define SQUARE(X) ((X) * (X))
#define CUBE(X) (SQUARE(X) * (X))

int main(int argc, char const *argv[])
{
    int a;
    a = CUBE(3);
    printf("%d\n", a);
#undef CUBE // now CUBE cant be use; it will show undefined
    /*int b;
    b = CUBE(5);
    printf("%d", b);*/

    return 0;
}
// #undef is used to restrict the use of macro in particular part of the program;also while reinitializing the macro, we have to first undefine it end then again define it