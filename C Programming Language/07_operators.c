#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b;
    a = 34;
    b = 6;

    // Arithmetic Operators
    // printf("a + b = %d\n", a + b);
    // printf("a - b = %d\n", a - b);
    // printf("a * b = %d\n", a * b);
    // printf("a / b = %d\n", a / b);
    // printf("a % b = %d\n", a % b);

    // Relational/Comparison Operators
    // printf("a + b = %d\n", a + b);
    // printf("a - b = %d\n", a - b);
    // printf("a * b = %d\n", a * b);
    // printf("a / b = %d\n", a / b);
    // printf("a % b = %d\n", a % b);

    // Relational Operators
    // printf("a && b = %d\n", a && b);
    // printf("a || b = %d\n", a || b);
    // printf("!a = %d\n", !a);

    // Bitwise Operators
    // printf("a & b = %d\n", a & b);
    // printf("a | b = %d\n", a | b);
    // printf("a ^ b = %d\n", a ^ b);
    // printf("~a = %d\n", ~a);
    // printf("a << 2 = %d\n", a << 2);
    // printf("a >> 2 = %d\n", a >> 2);

    // Assignment Operators
    // printf("a  += 2 = %d\n", a += 2);
    // printf("a  -= 2 = %d\n", a -= 2);
    // printf("a  *= 2 = %d\n", a *= 2);
    // printf("a  /= 2 = %d\n", a /= 2);

    // Increment or decrement operators
    // postincrement
    printf("the value of a++ is ", a++);
    // postdecrement
    printf("the value of a-- is ", a--);
    // predecrement
    printf("the value of --a is ", --a);
    // preincrement
    printf("the value of ++a is ", ++a);

    return 0;
}

// So What is an Operator

// An operator is a symbol used to perform operations in given programming language

// 1. Arithmetic Operators (+, -, *, /, %)

// + : addition
// - : subtraction
// * : multiplication
// / : division
// % : modulo

// 2. Relational Operators (==, !=, >, <, >=, <=)

// == : is equal to equal to
// != : is not equal to
// > : greater than
// < : less than
// >= : greater than or equal to
// <= : less than or equal to

// 3. Logical Operators (&&, ||, !)

// && : Logical AND Operator. Returns true if both the left and right operands are true (non-zero condition) else false
// || : Logical OR Operator. Returns true if any of the left and right opertions are true (non-zero condition) if false;
// ! : Logical OR Operator. It is used to reverse the logical state of its operands. Returns false if the given statement is true and vice versa;

// 4. Bitwise Operators (&, |, ^, ~, <<, >>)

// & : bitwise AND operator
// | : bitwise OR operator
// ^ : bitwise XOR operator
// ~ : one's complement bitwise operator
// << : left shift operator (multiply by 2)
// >> : rigth shift operator (divide by 2)

// 5. Assignment Operators (=, +=, -=, *=, /=)

// = : simple assignment operator. Assigns value from right side operands to left side operand
// += : Add AND assignment operator. It adds the right operand to the left operand and assign the result to the left operand
// -= : Subtract AND assignment operator. It subtracts the right operand to the left operand and assign the result to the left operand
// *= : Multiply AND assignment operator. It multiplies the right operand to the left operand and assign the result to the left operand
// /= : Divide AND assignment operator. It divides the right operand to the left operand and assign the result to the left operand

// 6. Increment or decrement operators (++, --)
// ++ : increment
// -- : decrement