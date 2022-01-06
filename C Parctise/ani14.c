#include <stdio.h>
void main()
{
    int x, y;
    short int z;
    printf("Enter Two Values\n");
    scanf("%d %d", &x, &y);
    z = x + y;
    printf("Values Are:--\n");
    printf("x= %d , y= %d , z=%d", x, y, z);
    z = x - y;
    printf("Values Are:--\n");
    printf("x= %d , y= %d , z=%d", x, y, z);
    z = x * y;
    printf("Values Are:--\n");
    printf("x= %d , y= %d , z=%d", x, y, z);
    z = x / y;
    printf("Values Are:--\n");
    printf("x= %d , y= %d , z=%d", x, y, z);
    z = x % y;
    printf("Values Are:--\n");
    printf("x= %d , y= %d , z=%d", x, y, z);
}