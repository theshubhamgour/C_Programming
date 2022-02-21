// program to demonstrate goto
#include<stdio.h>
void main(){

    int i =1;  //goto is a label alternate to loops
    label: 
        printf("%d\n",i);
        ++i;
    if (i<=10)
        goto label;
    



}