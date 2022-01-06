#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, s, c = 0;
    printf("enter size of array ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("enter the no you want to search ");
    scanf("%d", &s);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == s)
        {
            printf("\n%d is present at  loation %d",s,(i+1));
            c++;
        }
    }
    if (c==0)
    {
        printf("\n%d is not present in array",s);

    }
    else
    {
        printf("\n%d is present %dtimes in the array",s,c);
    }
    
    return 0;
}