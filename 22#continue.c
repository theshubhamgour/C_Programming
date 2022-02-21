// program to demonstrate continue
#include<stdio.h>
void main(){
    for (int i = 0; i < 10; i++)
    {
        if (i==5)
            continue; //skip
            printf("The number is: %d\n",i);
        
    }
        printf("\nContinue here");
    
}