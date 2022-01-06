#include <stdio.h>
#include <math.h>
#define PIE 3.14
void main()
{
    int a, b, x1, y1;
    float rad, die, Circum, Area;
    printf("enter values of two given points");
    scanf("%d%d%d%d", &a, &b, &x1, &y1);
    die = sqrt((x1 - a) * (x1 - a) + (y1 - b) * (y1 - b));
    rad = die / 2;
    Circum = 2 * PIE * rad;
    Area = PIE * rad * rad;
    printf("Circumference is= %f \n Area is= %f", Circum, Area);
}
