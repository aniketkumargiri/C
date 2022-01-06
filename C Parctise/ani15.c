#include <stdio.h>
void main()
{
    typedef int NewData;
    NewData x, y;
    printf("Enter Values\n");
    scanf("%d%d", &x, &y);
    printf("Value is:--\n");
    printf("x= %d y=%d", x, y);
}