#include<stdio.h>
enum days{monday=1,tuesday,wednesday,thrusday,friday,saturday,sunday};

int main(int argc, char const *argv[])
{
    int no;
    enum days d;
    printf("enter a no for days (1-7) ");
    scanf("%d",&no);
    d=no;
    if(d==saturday || d==sunday)
    {
        printf("weekend");
    }
    else
    {
        printf("working day");
    }

    return 0;
}
/*enum syntax: enum identifier{v1,v2,v3,..}; v1,v2,v3...are variables numeric values starts by default by 0,1,2...
values can also be set by the user 
eg: monday=1;then rest of the values are continued 2,3,4,5,6,7
or, monday=8,tuesday=9,wednesda10,tuesday=11,friday=12,saturday=13,sunday14
*/