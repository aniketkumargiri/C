#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int no, copy, rem, n = 0, ans = 0;
    printf("enter a no\n");
    scanf("%d", &no);
    copy = no;
    while (copy != 0)
    {
        copy = copy / 10;
        n++;
    }
    printf("%d\n", n);
    copy = no;
    while (copy > 0)
    {
        rem = copy % 10;
        ans = ans + pow(rem, n);
        copy = copy / 10;
    }
    printf("%d\n", ans);
    if (ans == no)
    {
        printf("%d is an armstrong no", no);
    }
    else
    {
        printf("%d is not an armstrong no", no);
    }

    return 0;
}
/*armstrong number : A no is called an armstrong no if sum of the nth power of each digit of that no is equal that no 
eg : 153 ; n=3
pow(1, 3) +pow(5, 3) + pow(3, 3) = 1 + 125 + 27 = 153
*/