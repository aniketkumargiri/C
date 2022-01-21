#include <stdio.h>

void func1(int array[], int length)
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += array[i]; // O(n)
    }
    // printf("sum = %d\n", sum);

    int product = 1;
    for (int i = 0; i < length; i++)
    {
        product *= array[i]; // O(n)
    }
    // printf("product = %d\n", product);
}

// time-complexity=O(length)
int main()
{
    int arr[] = {3, 5, 66};
    func1(arr, 3);

    return 0;
}

// Tricks for calculating time complexity :

// 1. Drop the non - dominant terms
// 2. Drop the constant terms
// eg : n ^ 2 + n + 1 -- > O(n ^ 2);

// 3. Break the code into fragments
