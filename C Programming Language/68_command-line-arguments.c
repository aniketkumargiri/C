#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("The value of argc is %d\n", argc);
    for (int i = 0; i < argc; i++)
    {
        printf("This argument at index number %d has a value of %s \n", i, argv[i]);
    }
    return 0;
}

// What are command line arguments?

// Command line arguments is an important concept in C programming
// Sometimes we need to pass arguments form the command line to the program a set of inputs
// command line arguments are used to supply parameters to the praogram when it is evolked
// It is mostly used when you need to control your program form the console
// These arguments are passed to the main() method

// Command Line Example:

// FFmpeg is a free and open-source project consisting pf a vast software suite of libraries and programs for handling video, audio and other multimedia files and streams
// Ffmpeg.exe is a command line utility written in c language
// Other examples include git, brew, apt-get etc...

// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     printf("argc is %d\n", argc);
//     if (argc >= 2)
//     {
//         printf("The arguments supplied are:\n");
//         for (int i = 0; i < argc; i++)
//         {
//             printf(" %s\n", argv[i]);
//         }
//     }

//     return 0;
// }

// argc : contains number of arguments
// 0th argument is program_name.exe
// If nothing is given, then argc = 1;

// **************************For more arguments through terminal:****************************
// .\68_command - line - arguments.exe ani kthe Giri

// argv : pointer array of characters comprises of command line arguments