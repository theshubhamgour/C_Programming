#include<stdio.h>
void main(){
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    if (age>=18)
    {
        printf("You can drive");
    }
    else{
        printf("You cannot drive");
    }
    
}