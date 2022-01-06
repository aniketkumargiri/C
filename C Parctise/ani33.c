#include <stdio.h>

int main()
{
    int x = 5;
    int *p;
    p = &x;
    int **q;
    q = &p;
    int ***r;
    r = &q;

    printf("%d\n", x);
    printf("%d\n", &x);
    printf("%d\n", *p);
    printf("%d\n", *q);
    printf("%d\n", *(*q));
    printf("%d\n", *(*r));
    printf("%d\n", *(*(*r)));

    ***r = 10;
    printf("%d\n", x);
    **q = *p + 2;
    printf("%d\n", x);


    return 0;
}