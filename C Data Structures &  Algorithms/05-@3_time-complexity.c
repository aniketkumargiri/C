#include <stdio.h>
#include <stdlib.h>

int random(int a)
{
    int i;
    int num = (rand() % (a + 1));
    return num;
}

int func(int n)
{
    int i;
    if (n <= 0)
    {
        return 0;
    }
    else
    {
        i = random(n - 1);
        printf("this\n");
        return func(i) + func(n - i - 1); // O(n)
    }
}

// time - complexity = O(n)
int main()
{
    int n;
    scanf("%d", &n);
    func(n);

    return 0;
}