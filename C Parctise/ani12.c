
#include <stdio.h>

void main()
{
    float Price;
    int Paise;
    printf("Enter the price of Item in decimal\n");
    scanf("%f", &Price);
    Paise = Price * 100;
    printf("Price in Paise is %d ", Paise);
}
