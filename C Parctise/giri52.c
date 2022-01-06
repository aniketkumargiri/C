#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[10][10], b[10][10], c[10][10];
    int row, column;
    printf("enter no of rows ");
    scanf("%d", &row);
    printf("enter no of columns ");
    scanf("%d", &column);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d ", c[i][j]);
        }
    }

    return 0;
}