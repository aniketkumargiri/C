#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age;
    printf("Enter the age\n");
    scanf("%d", &age);

    printf("You have entered %d years as your age\n", age);

    if (age > 18)
    {
        printf("You can vote!\n");
    }
    else if (age > 10)
    {
        printf("You are between 10 to 18 years and vote for kids\n");
    }
    else if (age > 3)
    {
        printf("You are between 3 to 10 years and vote for babies\n");
    }
    else
    {
        printf("You can't vote!\n");
    }

    return 0;
}

// syntax:

// if (/* condition */)
// {
//     /* code */
// }
// else
// {
//     /* code */
// }