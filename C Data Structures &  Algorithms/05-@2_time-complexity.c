#include <stdio.h>

void func(int n)
{
    int sum = 0;
    int product = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d %d\n", i, j); // O(n * n)
        }
    }
}

// time - complexity = O(n ^ 2);
int main()
{
    int n;
    scanf("%d", &n);
    func(n);

    return 0;
}