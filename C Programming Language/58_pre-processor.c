#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    printf("C Pre-processor Introduction & Working\n");
    // crtl + single click on stdio.h to go to the stdio.h file
    // crtl + single click on stdlib.h to go to the stdlib.h file

    return 0;
}

// Quick recap:

// Compiler converts textual form of a C program into an executable.
// There are four phases for a C program to become an executable

// preprocessing --> Compiling --> Assembly --> Linking

// preprocessing
// removal of comments;
// expansion of macros;
// expansion of includes;
// expansion of files;

// Compilation
// assembly level instructions are generated;

// Assembly
// .o;
// .exe;
// printf are not resolved
// assembly level instructions are converted to machine code

// linking
// links the function implementations

// What is a C preprocessor?

// C preprocessor comes under action before the actual compilation process
// C preprocessor  is not a part of the C compiler
// It is a text substitution tool
// All preprocessor commands begin with a hash symbol(#)

// preprocessor commands:

// #define
// #include
// #undef
// #ifdef
// #ifndef
// #if
// #else
// #elif
