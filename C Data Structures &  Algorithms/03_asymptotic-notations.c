#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Asymptotic Notations: Big O, Big Omega and Big Theta\n");

    return 0;
}

// Big O : A function f(n) is said to be O(g(n)) if and only if there exists constant c & a constant n0 such that 0 <= f(n) <= c * g(n) for all n >= n0

// Big Omega : A function f(n) is said to be Omega(g(n)) if and only if there exists constant c & a constant n0 such that 0 <= c * g(n) <= f(n) for all n >= n0

// Big theta : A function f(n) is said to be theta(g(n)) if and only if there exists constants c1, c2 & a constant n0 such that
// 0 <= c1 * g(n) <= f(n) for all n >= n0
// 0 <= f(n) <= c2 * g(n) for all n >= n0

// => 0 <= c1 * g(n) <= f(n) <= c2 * g(n) for all n >= n0