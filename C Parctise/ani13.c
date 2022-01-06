#include <stdio.h>
void main()
{
    float RicePrice, SugarPrice;
    printf("Enter the price of Rice:\n");
    scanf("%f", &RicePrice);
    printf("Enter the price of Sugar:\n");
    scanf("%f", &SugarPrice);
    printf("***LIST OF ITEMS***\n");
    printf("Item Price\n");
    printf("Item Rs. %f\n", RicePrice);
    printf("Rice Rs. %f\n", SugarPrice);
}