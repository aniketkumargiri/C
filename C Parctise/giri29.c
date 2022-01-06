#include <stdio.h>
#define X 100
#define Y 200
#define Z 300
#define W 0
#define V 1

int main(int argc, char const *argv[])
{
#ifndef X
#define X 100
#else
    printf("already defined X is 100\n");
#endif

#ifndef Y
#define Y
#else
    printf("defined already Y is 200\n");
#endif

#ifdef Z
    printf("value of Z is 300\n");
#undef Z
#define Z 400
    printf("now, value of Z is 400\n");
#endif

#if W
printf("value of W is not zero\n");
#else 
printf("value of W is zero\n");
#endif

#if V
printf("value of V is not zero\n");
#endif
#undef V
#define V 0
#if V
printf("value of V is not zero\n");
#else 
printf("value of V is zero\n");
#endif

    return 0;
}
/* 
compiler control directives:condition-wise execution/compilation of code
#define
#undef
#ifdef-macro definition exits, then code will execute
#ifndef-macro does not exit,then code will execute
#else-alternative path in conditional 
#endif-end of ifdef or ifndef (always)
#if-if value is true(!=0),executes; false(==0),doesnot execute
ifdef checks the definition of macro while if checks the value of macro
 */
