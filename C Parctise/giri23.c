#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    printf("enter value of a");
    scanf("%d", &a);

    /*if (a >10)
    {
        printf("a is greater than 0-9\n");
    }
    else if (a==10)
    {
        printf("a is 10\n");
    }
    else //default statement
    {
        printf("a is between 0-9\n");
    }*/
    if (a % 2 == 0)
    {
        printf("a is an even no\n");
    }
    else
    {
        printf("a is an odd no\n");
    }

    return 0;
}
/*decision making and branching
1.if statement:
   a.simple if
   b.if---else
   c.nested if
   d.else-if ladder
2.switch statement
3.conditional statement
4.goto statement
*/
