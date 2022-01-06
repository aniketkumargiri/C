#include <stdio.h>
#include <string.h>

union Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
};

int main(int argc, char const *argv[])
{
    union Student s1;

    s1.id = 89;
    printf("The id is %d\n", s1.id);

    s1.marks = 99;
    printf("The marks is %d\n", s1.marks);

    s1.fav_char = 'a';
    printf("The fav_char is %c\n", s1.fav_char);

    strcpy(s1.name, "Aniket");
    printf("The name is %s\n", s1.name);

    return 0;
}

// What is a union?

// Union is a user defined data type (very similar to structure)
// The difference between structs and unions lies in the fact that in structures, each member has its own storage location, whereas members of a union uses a single shared memory location
// This single shared memory location is equal to the size of its largest data member

// Declaring and accessing union members

// Like structures, we access any member of a union by using the member access operator (.)
// We use keyword union to define a union
// Syntax is very similar to taht of structure

// struct student
// {
//     float marks; // 4 bytes
//     int id;      // 4 bytes
// };
// // total = 8 bytes of data;

// union student
// {
//     float marks; // 4 bytes
//     int id;      // 4 bytes
// };
// // 4 bytes of data shared between id and marks;

// Syntax is very similar to taht of structure

// union test
// {
//     int a;
//     float b;
//     char c;
// } un;
// un.a;
// un.b;
// un.c;
