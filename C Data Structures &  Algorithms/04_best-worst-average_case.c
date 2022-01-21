#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Best case, Worst case and Average case Analysis of an Algorithm\n");

    return 0;
}
// Time Complexity: Amount of time required for an algorithm to ru is called it's time complexity. Every computer is not equally powerful enough.

// --> Asymptotic analysis of an algorithm is the measure of how runtime grows with input

// Linear Search:
// best case = O(1)-- > constant time[t = k];
// worst case = O(n)-- > linear time[t = nk];
// average = O((sum of all possible runtimes) / (total number of possibilities))
        // = [(k + 2k + 3k + ... + nk) + nk] / (n + 1)
        // = k[{(n(n + 1) + n} / 2] / (n + 1);
        // O(n);
    
// Binary Search:
// best case = O(1)-- > constant time[t = k];
// worst case = O(n)-- > linear time[t = k(log2(n))];
// average = O((sum of all possible runtimes) / (total number of possibilities))
        // = [(k + k/2 + k/4 + ... + n/k) + n/k] / (n + 1)
        // = k[{(n(log2(n)) + n/k} / 2] / (n + 1);
        // O(log2(n));

// Space Complexity: Amount of space required for an algorithm to run within the memory is called it's space complexity. Time is not the only thing we worry about while analysising an algorithm. Space is equally important as time.

// --> creating an array of size n = O(n) space
// --> If a function calls itself recursively n times, then it's space complexity is O(n)