
#include <stdio.h>
void main()
{
    int x, y;
    float Sum, Diff, Prod, Div;
    printf("enter values of x and y");
    scanf("%d%d", &x, &y);
    Sum = x + y;
    Diff = x - y;
    Prod = x * y;
    Div = x / y;
    printf("x= %d y= %d\n", x, y);
    printf("Sum= %f Difference= %f\n", Sum, Diff);
    printf("Product= %f Dividion= %f", Prod, Div);
}
