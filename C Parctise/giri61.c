#include <stdio.h>

int sum(int a, int b); //function with argument and with return value

int main(int argc, char const *argv[])
{
    int a, b; //actual parameters
    printf("enter two inputs ");
    scanf("%d%d", &a, &b);
    int s = sum(a, b);
    printf("%d", s);

    return 0;
}
int sum(int x, int y) //at the time of definition names of formal arguments can be changed
{
    int c; //formal parameters
    c = x + y;
    return c;
}
/*functions:sub-part of a program, used to reduce the complexities and length of a program
1.Built-in function:
eg:printf,scanf,...

2.user defined function:
a.function declaration
-->function type(return)
-->function name
-->function list(arguments)
-->terminating semicolon

b.function call
c.function definition
--<function type
--<function name
--<parameter list
--<local variable declaration
--<function statements
--<return statement
*/