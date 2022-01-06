#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x;
    for (int i = 0; i < 5; i++)
    {
        printf("\nHey Guys\n\n");
        for (int j = 1; j < 3; j++)
        {
            printf("Type any No. & To Exit : Press 1\n");
            scanf("%d", &x);
            if (x == 1)
            {
                goto end; // This goto will transfer the control to end: i.e. out of both loop
            }
        }
    }
end:
    printf("\'For\' loops are skipped as you pressed 1");

    return 0;
}