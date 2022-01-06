#include <stdio.h>
#include <math.h>
void main()
{
    int x1, x2, y1, y2;
    float d;
    printf("enter values on x-axis");
    scanf("%d%d", &x1, &x2);
    printf("enter values on y-axis");
    scanf("%d%d", &y1, &y2);
    d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    printf("Distance between to points is= %f", d);
}