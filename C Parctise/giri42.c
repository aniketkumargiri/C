#include <stdio.h>

int main(int argc, char const *argv[])
{
    int no = 2;
    do
    {
        printf("%d\t", no);
        no = no + 2;
    } while (no <= 100);

    return 0;
}
//do-while is an exit control loop. it runs atleast once definately
