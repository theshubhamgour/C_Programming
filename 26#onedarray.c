// Program to demostrate 1-D array

#include<stdio.h>
void main(){

    int a[5]= {45,56,78,12,56};
    // where [] is called sub script operator

    for (int i = 0; i < 5; i++)
    {
        printf("Value of Array_%d is: %d\n",i,a[i]);
    }
    
}