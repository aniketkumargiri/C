#include <stdio.h>
#include <string.h>

struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[256];
} ani, ravi, ram;

// struct Student ani, ravi, ram;

void print()
{
    printf("%s\n", ani.name);
}

int main(int argc, char const *argv[])
{
    // struct Student ani, ravi, ram;

    ani.id = 34;
    ravi.id = 21;
    ram.id = 48;

    ani.marks = 99;
    ravi.marks = 89;
    ram.marks = 97;

    ani.fav_char = 'a';
    ravi.fav_char = 'b';
    ram.fav_char = 'c';

    printf("Aniket got %d marks\n", ani.marks);

    strcpy(ani.name, "Aniket kumar Giri");
    printf("Ani's name is %s\n", ani.name);

    print();

    return 0;
}

// What is structure in C?

// structures are user defined data types in c
// using structures allows us to combine data of different types together
// It is used to create a complex data type which contains diverse information
// Thay are very similar to array but structures can store data of different (any) types, which is practically more useful

// example: storing employee information

// suppose we want to store information of 10,000 employees working at Abc Pvt. Ltd.
// Name;
// Address;
// Email;
// Employee Id;
// clearly we need some user defined data types which contains only this information

// Defining a structure syntax:

// struct structure_name {
//     /* data type var 1 */
//     /* data type var 2 */
//     /* data type var 3 */
//     /* ... */
// };
// [structure_variables];

// Declaring a structure:
// struct employee
// {
//     int id;
//     char name[53];
//     float marks;
// } e1, e2;

// struct employee e1, e2;

// Initializing a structure:

// int main(int argc, char const *argv[])
// {
//     // struct employee e1 = {12, "ani", 34.23};

//     struct employee e1;
//     e1.id = 12;
//     e1.name = "ani";
//     e1.marks = 34.23;

//     return 0;
// }

// Accessing structures members:
// array elements are accessed using the subscript variable
// In a similar fashion, structure members are accessed using the dot[.] operator
// (.) is called as "structure member operator"
// To access the members of a structure, we use this operator in between "structure name & member name"