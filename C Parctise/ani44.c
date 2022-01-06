#include <stdio.h>

void fun1(int(*A))
{
    printf("%d\n", A);
}
void fun2(int (*B)[3])
{
    printf("%d\n", B);
}
void fun3(int (*C)[2][2])
{
    printf("%d\n", C);
}
int main()
{
    int C[3][2][2] = {{{2, 5}, {7, 9}},
                      {{3, 4}, {6, 1}},
                      {{0, 8}, {11, 13}}};
    fun3(C); //C returns int (*)[2][2]
    int A[2] = {1, 2};
    fun1(A); //A returns int*
    int B[2][3] = {{2, 4, 6}, {5, 7, 8}};
    fun2(B); //B returns int (*)[3]

    return 0;
}