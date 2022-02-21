// Register executes very fast as compared to another local variable

#include<stdio.h>

int main(){
    register  int a =11; //execution is very fast lifeline is within the block
    printf("%d",a);

}