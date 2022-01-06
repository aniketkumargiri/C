#include <stdio.h>
#include <math.h>
#define PIE 3.14
void main()
{
    float a, b, x1, y1;
    float Rad, Circum, Area;
    printf("enter points on the circle\n");
    scanf("%f%f", x1, y1);

    printf("enter center of the circle");
    scanf("%f%f", a, b);

    Rad = sqrt((x1 - a) * (x1 - a) + (y1 - b) * (y1 - b));
    Circum = 2 * PIE * Rad;
    Area = PIE * Rad * Rad;
    printf("Circumference is= %f \n Area is= %f", Circum, Area);
}