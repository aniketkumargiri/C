#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Infix to Postfix Using stack");

    return 0;
}
// Infix: x - y / z - k * d

// Postfix:
// If we encounters an operand in infix expression, simply write in the postfix expression
// If we encounters an operator in infix expression, push into the stack and marks its precedence
// Check precedence of the pushed operator.
//  If it's precedence is greater than or equal to the previous pushed operator, simply push it.
// If it's precedence is less than the previous pushed operator, pop untill the next smaller precedence operator is found or the stack is empty.

// postfix: x y z / - k d * -
// ((x - (y / z)) - (k * d))
// (x - [yz / ]) - [kd * ])
// ([xyz / ] - [kd * ])
// xyz / - kd * -

// x + y * z - k
// ((x + (y * z)) - k)
// (x + [yz *]) - k
// [xyz * +] - k
// xyz * + k - 
