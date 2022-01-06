#include <stdio.h>
void main()
{
    int a, b, c;
    float x;
    printf("enter values of a,b,c");
    scanf("%d%d%d", &a, &b, &c);
    x = a / (b - c);
    printf("x = %f\n", x);
}