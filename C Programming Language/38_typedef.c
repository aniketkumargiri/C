#include <stdio.h>

typedef struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[256];
} st;

// typedef struct Student st;

int main(int argc, char const *argv[])
{
    // int *a, b;
    // int c = 89;
    // a = &c;
    // b = c;

    // typedef int *p;
    // p a, b;
    // int c = 57;

    // a = &c;
    // printf("%d\n", &c);
    // printf("%d\n", a);
    // printf("%d\n", c);
    // printf("%d\n", *a);

    // b = &c;
    // printf("%d\n", &c);
    // printf("%d\n", b);
    // printf("%d\n", c);
    // printf("%d\n", *b);

    // typedef unsigned long ul;
    // ul l1, l2, l3;

    // typedef int i;
    // i a = 3;
    // printf("The value of a is %d\n", a);

    // struct Student s1, s2;
    st s1, s2;
    s1.id = 89;
    s2.id = 12;
    printf("The value of student 1 is %d\n", s1.id);
    printf("The value of student 2 is %d\n", s2.id);

    return 0;
}

// typedef <previous_name> <alias_name>