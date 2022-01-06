#include <stdio.h>
#define CUBE(X) (X) * (X) * (X) //macro with argument
#define CUBE_(X) X *X *X
#define MULT(A, B) A *B

int main(int argc, char const *argv[])
{
    int a = CUBE(3 + 2);
    printf("%d\n", a);

    int b = CUBE_(3 + 2);
    printf("%d\n", b);

    int c = MULT(a, b);
    printf("%d\n", c);

    return 0;
}