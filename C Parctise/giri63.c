#include <stdio.h>

void add(void); //function with no arguments and no return value

int main(int argc, char const *argv[])
{
    add();

    return 0;
}
void add()
{
    int a, b, c;
    printf("enter values ");
    scanf("%d%d", &a, &b);
    c = a + b;
    printf("addition is:%d", c);
}
