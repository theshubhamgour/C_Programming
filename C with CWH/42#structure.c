/*

    * What is a Structure in C?
        Structures are usually used when we want to store dissimilar data together.
        For example, we want to store data about a book.

    *How to Access the Structure Elements?
        As we use subscript to access individual elements of an array. 
        But in the case of structures, to access any element, we use the operator (.). 
        This dot operator is coded between the structure variable name and the structure 
        member that we wish to access.

*/

#include<stdio.h>

struct library
{
    char name;
    int id;
    int roll;

};

int main(){
    struct library shubham, harry, barry,harsh;

    shubham.id= 45;
    harry.id= 46;
    harsh.id= 47;
    
    
    shubham.roll= 456;
    harry.roll= 789;
    harsh.roll= 655;
    
    printf("Shubham's roll number is: %d\n",shubham.roll);
    printf("Harry's roll number is: %d\n",harry.roll);
    printf("Harsh's roll number is: %d\n",harsh.roll);
    
    printf("Shubham's Identity number` is: %d\n",shubham.id);
    printf("Harry's Identity number` is: %d\n",harry.id);
    printf("Harsh's Identity number` is: %d\n",harsh.id);
    
}