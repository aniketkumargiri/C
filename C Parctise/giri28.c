#include <stdio.h>

int main(int argc, char const *argv[])
{
    int year;
    printf("enter a year");
    scanf("%d", &year);
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                printf("year is a leap year");
            }
            else
            {
                printf("year is not a leap year");
            }
        }
        else
        {
            printf("year is a leap year");
        }
    }
    else
    {
        printf("year is not a leap year");
    }

    return 0;
}