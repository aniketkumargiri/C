#include <stdio.h>

int main()
{
    int B[2][3] = {2, 3, 6, 4, 5, 8};//two one-dimentional array of three elements each

    //B[i][j]=*(B[i]+j)=*(*(B+i)+j)

    int(*p)[3] = B;//declaring pointer to 1-D array of three integers

    printf("%d\n", B);        //&B[0]
    printf("%d\n", *B);       //B[0] or &B[0][0]
    printf("%d\n", B + 1);    //&B[1]
    printf("%d\n", *(B + 1)); //B[1] or &B[1][0]
    printf("%d\n", *(B+1)+2);        //&B[1][2]
    printf("%d\n", *(*B+1));        //B[0][1]

    return 0;
}