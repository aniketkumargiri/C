#include <stdio.h>
void main()
{
    int Len, Wid, Area, Peri;
    printf("Enter the length of the rectangle :\n");
    scanf("%d", &Len);
    printf("Enter width of the rectangle :\n");
    scanf("%d", &Wid);
    Peri = 2 * (Len + Wid);
    Area = Len * Wid;
    printf("The perimeter of the rectangle is =%d \n", Peri);
    printf("The area of the rectangle is =%d \n", Area);
}
