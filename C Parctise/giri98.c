#include <stdio.h>

int main(void)
{
    // your code goes here
    int A, B, C, Amin, Bmin, Cmin, T, Tmin;
    scanf("%d", &T);

    while (T--)
    {
        scanf("%d %d %d %d %d %d %d", &Amin, &Bmin, &Cmin, &Tmin, &A, &B, &C);
        if ((A > Amin) && (B > Bmin) && (C > Cmin) && ((A + B + C) > Tmin))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        
    }

    return 0;
}
