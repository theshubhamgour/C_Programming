//Pointers

#include<stdio.h>
int main(){
    int a=45;
    int * ptr =&a;
    
    printf("The normal value: %d",a);

    printf("\nThe pointer value(address): %d",ptr);
    printf("\nThe pointer value(address): %d",&a);

    printf("\nThe pointer value(actual value of a): %d",*ptr);

}