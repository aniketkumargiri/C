#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 10, b = 4;

    printf("%d\n", a + b);
    printf("%d\n", a - b);
    printf("%d\n", a * b);
    printf("%d\n", a / b);
    printf("%d\n", a % b);

    if (a == b)
        printf("%d\n", a);
    if (a > b)
        printf("%d\n", a);
    if (a < b)
        printf("%d\n", a);
    if (a >= b)
        printf("%d\n", a);
    if (a <= b)
        printf("%d\n", a);
    if (a != b)
        printf("%d\n", a);

    int x;
    x = (a >= b) ? a : b;

    a++, b--;
    printf("%d\n", a + b);
    ++a, b++;
    printf("%d\n", a - b);
    a--, ++b;
    printf("%d\n", a * b);
    --a, --b;
    printf("%d\n", a / b);
    ++a, ++b;
    printf("%d\n", a % b);
    x = a-- + ++b;
    printf("%d\n", x);
    x = a++ + --b;
    printf("%d\n", x);
    x = --a + ++b;
    printf("%d\n", x);
    x = a-- + b--;
    printf("%d\n", x);
    x = a++ + b++;
    printf("%d\n", x);

    printf("%d\n", a & b);
    printf("%d\n", a | b);
    printf("%d\n", a ^ b);
    printf("%d\n", a && b);
    printf("%d\n", a || b);
    int y = 0;
    printf("%d\n", a && y);
    printf("%d\n", a || y);

    y = (11, 12, 13); //rightmost value is printed separated by (,)
    printf("%d", y);

    return 0;
}
/*operators
1.arithmetic operators(+,-,*,/,%)
2.relational operators(<,>,<=,>=,==,!=)
3.logical operators(&&,||,!)
4.conditional opeartors(condition?expression1:expression2;)
5.assignment operator(=)
6.increment/decrement operators(pre/post:++,--)
7.bitwise operators(&,|,^,<<,>>)
8.special operators(,sizeof,*,->,)
*/