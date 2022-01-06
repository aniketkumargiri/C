#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age;
    printf("Enter the age\n");
    scanf("%d", &age);

    int marks;
    printf("Enter the marks\n");
    scanf("%d", &marks);

    switch (age)
    {
    case 3:
        printf("Your age is 3\n");
        switch (marks)
        {
        case 60:
            printf("Your marks is 60\n");
            break;
        }
        break;
    case 10:
        printf("Your age is 10\n");
        break;
    case 18:
        printf("Your age is 18\n");
        break;
    default:
        printf("Invalid age!\n");
    }

    return 0;
}

// Rules for switch statement

// Inside switch case statement only int and char are allowed
// case must be inside switch statement
// break is not must
// if break is not after every case, then all the cases after correct case will be printed
// default is also not must, but always a good practice and advised to write default case

// syntax:

// switch (expression)
// {
// case /* constant-expression */:
//     /* code */
//     break;

// case /* constant-expression */:
//     /* code */
//     break;

// default:
//     break;
// }