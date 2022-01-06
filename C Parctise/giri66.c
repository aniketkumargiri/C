#include <stdio.h>

void display(int *);

int main(int argc, char const *argv[])
{
    int a = 100;
    display(&a);
    printf("\n%d", a); //change in formal argument affects the actual argument in call by reference

    return 0;
}
void display(int *x)
{
    *x = *x + 100;
    printf("%d", *x);
}
