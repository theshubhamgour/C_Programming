// Program to deonstrate recursion using factorial

#include<stdio.h>

int fact(int num){
    if (num ==1 || num ==0)
    {
        return 1;
    }else{
        return (num* fact(num-1));
    }
    
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("The factorial of %d is %d",n,fact(n));
}