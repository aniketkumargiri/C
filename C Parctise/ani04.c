#include <stdio.h>
void main()
{
    float F, C;
    printf("enter temperature in celcuis\n");
    scanf("%f", &C);
    F = (((9 * C) / 5) + 32);
    printf("Celsius = %f to Fahrenheit = %f\n", C, F);

    printf("enter temperature in fahrenheit\n");
    scanf("%f", &F);
    C = ((F - 32) * 5) / 9;
    printf("Fahrenheit = %f to Celsius = %f\n", F, C);
}