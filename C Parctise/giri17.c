#include<stdio.h>

int main(int argc, char const *argv[])
{
    float b;
    b=5/2; //integer/integer=integer
    printf("value of b=%f\n",b);
    b=5.0/2; //float/integer=integer
    printf("value of b=%f\n",b);
    b=(float)5/2; //float/integer=float
    printf("value of b=%f",b);

    return 0;
}
/*type-casting
1.implicit conversion:lower data types are (automatically) converted into higher data types
eg: int(+,-,*,/,%)int=int
eg: float(+,-,*,/,%)float=float
eg: int(+,-,*,/,%)float=float

2.explicit conversion:forcefully type-casting
syntax: (data_type)expression

*/