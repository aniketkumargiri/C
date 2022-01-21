#include<stdio.h>

// Machines understands postfix expressions more easily than infix expressions
int main(int argc, char const *argv[])
{
    printf("Infix, Prefix and Postfix Expressions\n");

    return 0;
}

// Infix: operand <operator> operand
// a + b, p / q, a - b, x * y

// Prefix: <operator> operand operand
// + a b, - p q, * p b, / w y

// Postfix: operand operand <operator>
// a b +, x y -, p q *, c e /

// Infix: A * (B + C) * D
// ((A * (B + C)) * D)
// (A * (B + C)) D *
// A (B + C) * D *
// A B C + * D *
// Postfix: A B C + * D *

// ********** Evaluation according to operator precedence **********
// Example: Convert x - y + z to Prefix and postfix :
// prefix:
// 1. Parenthesize the expression
// (x - (y * z))
// 2. Evaluate prefix
// x - (* y z)
// -x * y z

// postfix:
// 1. Parenthesize the expression
// (x - (y * z))
// 2. Evaluate postfix
// x - (y z *)
// x y z * -

// Example: Convert p - q - r / a to Prefix :
// prefix : ((p - q) - (r / a))
// ([- p q] - [/ r a]) 
// - - p q / r a

// Example: Convert (m - n) * (p + q) to Postfix :
// postfix: ((m - n) * (p + q))
// ([m n -] * [p q +])
// m n - p q + *