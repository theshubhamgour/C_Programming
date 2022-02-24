/*
What is typedef in C?
A typedef is a keyword that is used to assign alternative names to existing datatypes. We use typedef with user defined datatypes, when names of the datatypes become slightly complicated to use in programs. Typedefs can be used to:

Provide the clarity in the code
it makes easier to change the underlying data types that you use
Typedefs makes the code more clear and easier to modify.

*/

#include <stdio.h>

typedef struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
} std;

int main()
{

    std s1, s2;
    s1.id = 56;
    s2.id = 89;
    printf("Value of s1's Id is %d\n", s1.id);
    printf("Value of s2's Id is %d\n", s2.id);


    // typedef <previous_name> <alias_name>;
    // typedef unsigned long ul;
    // typedef int integer;
    // ul l1, l2, l3;
    // integer a = 4;
    // printf("Value of a is %d", a);
    return 0;
}
