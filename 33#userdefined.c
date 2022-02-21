#include<stdio.h>

int sum(int a,int b) //user defined
{
    return a+b; //return the result to the function
}

int main(){
    int result = sum(10,20);
    printf("%d",result); //pre defined
}