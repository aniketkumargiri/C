#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("File(I/O) Input - Output In C programming\n");

    return 0;
}

// Why do we need a file?

// Files are used to store data and information
// Files are used to read & access data anytime from the hard disk.
// Files make it easy for a programmer to access and store content without losing it on program.

// Volatile Vs non-Volatile Memory

// Volatile memory:(RAM)
// Volatile memory is computer storage that only maintains its data while the device is powered.
// The RAM will hold data, programs, and information aas long as it has a constant power supply but immediately the power is interrupted all that content is cleared
// The volatile memory will only hold data temporarily

// NON - Volatile Memory:(HARD DISK)
// NON - Volatile Memory memory is computer memory that can retain the stored information even when not powered.
// This type of memory is also referred to as permanent memroy since data stored within it can be retrived even when there is no constant power supply available
// It is used for long - term storage of data.

// Why do we need files?

// When a C program is terminated, the data stored in ram is lost
// Storing in a file will preserve out data even after the program terminates.
// RAM is not able to handle quite large amount of data due to its small size relative to hard disk.
// It is easy to transfer data as files.

// Types of files
// There are two types off files:
// Text files
// Binary files 

// File Operation in C
// In C we can perform these high level operations on files:
// 1. Creating a new file.
// 2. Opening a file.
// 3. closing a file.
// 4. Reading from and writing to a file.