#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, age;
    for (i = 0; i < 5; i++)
    {

        printf("Iteration time = %d\nEnter Your Age : ", i);
        scanf("%d", &age);
        if (age > 10)
        {
            break; // Checking Break Statement
        }

        if (age < 10)
        {
            continue;
        }

        // if (age = 10)
        printf("Hey Guys\n");
        printf("This code is printed coz if condition is not satisfied. \n");
        printf("Checking Continue Statement\n\n"); // Checking Continue Statement
    }

    return 0;
}