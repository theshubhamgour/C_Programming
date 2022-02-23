// Here is a program, which demonstrates the use of if-else statement.

/*

The statement written in if block will execute when the expression following if evaluates to true. 
But when the if is written with else block, then when the condition written in if block turns to be false, 
then the set of statements in the else block will execute.

*/

#include<stdio.h>
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if (a>=10)
    {
        printf("Number entered is %d and is greater than 10",a);
    }
    else{
        printf("Number entered is %d and is less than 10",a);
    }
    
}