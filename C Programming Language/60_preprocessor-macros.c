#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("File name is %s\n", __FILE__);
    printf("Today's date is %s\n", __DATE__);
    printf("Current time is %s\n", __TIME__);
    printf("Current line number is %d\n", __LINE__);
    printf("ANSI %d\n", __STDC__);

    return 0;
}

// Predefined Macros in C

// __DATE__: The current date as character literal in "MMM DD YYYY" format.
// __TIME__: This contains the current time as character literal in "HH:MM:SS" format.
// __FILE__: The current file as a string literal
// __LINE__: The current line number as a decimal literal
// __STDC__: Defined as I(one) when the compiler compiles with the ANSI standard
