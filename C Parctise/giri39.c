#include <stdio.h>

int main(int argc, char const *argv[])
{
    int no, var, rem, binary = 0, i = 1;
    printf("enter a no in decimal no");
    scanf("%d", &no);
    var = no;
    while (no != 0)
    {
        rem = no % 2;
        no = no / 2;
        binary += (rem * i);
        i = i * 10;
    }
    printf("no in binary of %d is %d",var,binary);

    return 0;
}
/*binary no- 0 and 1
decimal no- 0 to 9
*/