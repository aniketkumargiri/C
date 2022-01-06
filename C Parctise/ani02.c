#include <stdio.h>
#define PIE 3.14
void main()
{   
    /*program for printing area of circle*/
    int Rad;
    float Area;
    printf("enter radius of circle");
    scanf("%d", &Rad);
    Area = PIE * Rad * Rad;
    printf("Area of a circle is--> %f", Area);
}