#include <stdio.h>
#include <math.h>
void main()
{
    int a, b, c;
    int Se, Area;
    printf("enter sides of triagle\n");
    scanf("%d%d%d", &a, &b, &c);
    Se = (a + b + c) / 2;
    printf("semiperimeter of a triangle is=%d\n", Se);
    Area = sqrt(Se * (Se - a) * (Se - b) * (Se - c));
    printf("Area of a triangle is= %d", Area);
}