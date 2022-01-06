#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("%d bytes\n", sizeof(int));
    printf("%d bytes\n", sizeof(float));
    printf("%d bytes\n", sizeof(double));
    printf("%d bytes\n", sizeof(char));
    printf("%d bytes\n", sizeof(void));
    printf("%d bytes\n", sizeof(long int));
    printf("%d bytes\n", sizeof(short int));
    return 0;
}
/* data types
1.primary data types:
   a.int
   b.float
   c.double
   d.char
   e.void
2.secondary data types
   a.array
   b.pointers
   c.structures
   d.union
   e.enum
*/
/*modifiers
1.size
   a.short
   b.long
-->generally used with int,double;not float,char
2.sign
   a.signed
   b.unsigned
-->by default always signed(+ve & -ve)
-->genarally used with int,char;not float,double
*/