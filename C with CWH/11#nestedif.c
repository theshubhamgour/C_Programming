/*

Nested If-Else Statements:-
                            We can write an entire if-else statement within either the body of the if statement or the body of an else statement. 
                            This is called ‘nesting’ of ifs. The Example of nested if-else statements is given below

*/

#include<stdio.h>
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if (a==1)
    {
        printf("Exact match one");
    }
    else if (a==5)
    {
        printf("Exact match five");
    }
    
    else if (a==15)
    {
        printf("Exact match fifteen");
    }
    else{
        printf("Out of bound");
    }
    
    
    
}