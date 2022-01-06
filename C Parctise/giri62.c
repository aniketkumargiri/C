#include <stdio.h>

void add(int x, int y); //function with argument but no return value

int main(int argc, char const *argv[])
{
    int x, y;
    printf("enter values of x and y ");
    scanf("%d%d", &x, &y);
    add(x, y);

    return 0;
}
void add(int x, int y) //function with argument but no return value
{
    int c;
    c = x + y;
    printf("addition is:%d", c);
}
