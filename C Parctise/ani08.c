#include <stdio.h>
#include <math.h>
#define PIE 3.14
void main()
{
    double a = 0, b = 0, x1 = 3, y1 = 4;
    double Rad, Circum, Area;
    Rad = sqrt((x1 - a) * (x1 - a) + (y1 - b) * (y1 - b));
    Circum = 2 * PIE * Rad;
    Area = PIE * Rad * Rad;
    printf("Circumference is= %f \n Area is= %f", Circum, Area);
}