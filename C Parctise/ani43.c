#include <stdio.h>

int main()
{
    int C[3][2][2] = {{{2, 5}, {7, 9}},
                      {{3, 4}, {6, 1}},
                      {{0, 8}, {11, 13}}};

    // C[i][j][k]=*(C[i][j]+k)=*(*(C[i]+j)+k)=*(*(*(C+i)+j)+k)

    int(*p)[2][2] = C;

    printf("%d\n", C);              //&C[0]
    printf("%d\n", *C);             //C[0] or &C[0][0]
    printf("%d\n", *(C[0][0] + 1)); //C[0][0][1]
    printf("%d\n", *(C[0][1] + 1)); //C[0][1][1]
    printf("%d\n", *(C[1] + 1));    //C[1][1]&C[1][1][0]

    return 0;
}