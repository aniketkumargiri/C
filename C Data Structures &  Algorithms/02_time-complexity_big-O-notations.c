#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Time Complexity and Big O Notations\n");

    return 0;
}

// Time Complexity and Big O Notations:

// BigO(Mathematical definition) : order of O(n) == O(n ^ 2) == O(n ^ 3) == O(n ^ 4)...;
// BigO(Industrial definition) : order of O(1) < O(log2(n)) < O(n) < O(n * log2(n)) < O(n ^ 2) < O(2 ^ n)...;

// BigO(1) : constant time to run the algorithm O(n ^ 0);
// BigO(log2(n)) : quadratic time to run the algorithm O(log2(n));
// BigO(n) : linear time to run the algorithm O(n ^ 1);
// BigO(n * log2(n)) : quadratic time to run the algorithm O(n * log2(n));
// BigO(n ^ 2) : quadratic time to run the algorithm O(n ^ 2);
// BigO(2 ^ n) : exponential time to run the algorithm O(2 ^ n);
