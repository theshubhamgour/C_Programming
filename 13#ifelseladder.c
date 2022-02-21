// Creating a grading program to demostrate if -else ladder


#include<stdio.h>
void main(){
    int res;
    printf("Enter your result: ");
    scanf("%d",&res);
    if (res == 100)
    {
        printf("You scored good marks, hence your grade is A\n");
    }
    else if (res >70)
    {
        printf("You scored good marks, hence your grade is B\n");
    }
    else if (res > 60)
    {
        printf("You scored good marks, hence your grade is C\n");
    }
    
    else
    {
        printf("Work hard");
    }
    
    
    
}  


