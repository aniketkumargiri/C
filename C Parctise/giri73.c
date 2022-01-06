#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 10, b = 20, c, d;
    c = ++a;
    d = b++;
    printf("%d %d %d %d", a, b, c, d);
    a = ++a;
    b = b++;
    printf("\n%d %d", a, b);
    a = ++b;
    b = a++;
    c = b++;
    printf("\n%d %d %d", a, b, c);
    a = ++a;
    b = c++;
    c = b--;
    printf("\n%d %d %d", a, b, c);
    c = a++ + --b;
    printf("\n%d %d %d", a, b, c);


    return 0;
}