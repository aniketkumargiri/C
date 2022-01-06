#include <stdio.h>
void main()
{
    int x, y, z, Temp;
    printf("Enter Three Values\n");
    scanf("%d%d%d", &x, &y, &z);
    Temp = x;
    x = y;
    y = z;
    z = Temp;
    printf(" x= %d \n y= %d \n z= %d", x, y, z);
}